0x18. C - Dynamic libraries

What is a dynamic library, how does it work, how to create one, and how to use it
What is the environment variable $LD_LIBRARY_PATH and how to use it
What are the differences between static and shared libraries
Basic usage nm, ldd, ldconfig

[200~CREATING A DYNAMIC LIBRARY (Linux)
On the Linux terminal type the following command:

$ gcc *.c -c -fPIC
This generates on object file .o for each source file .c
-c flag ensures that each .o file isn't linked yet.
-fPIC flag ensures that the code is position independent meaning it wouldn't matter where the computer loads into memory.
$ gcc *.o -shared -o liball.so
*.o means all object files will be compiles into the dynamic library.
-shared flag specifies the dynamic library.
By convention shared library names start with lib and end with .so for dynamic lybraries and .a for static libraries.
$ export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
This will export the path for libraries so that programs know where to look for them.
USING DYNAMIC LIBRARIES
In order to use the dynamic library, the following command is used to compile:

$ gcc -L <testfile.c> -l<librarname> -o <outputfile>.
the -L flag tells the compiler to look in the current directory for the library file.
<testfile.c> should be replaced by the file you wish to compile that uses the shared library.
-l flag tells the compiler to look for a library called librarname.so
is the name of the executable once compilation is done.
