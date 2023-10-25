This is a directory about c-make file.
======================================
 Task 0
=========
Creating the first make file that names all the executables, school, with no variable and all rules build.

Task 1
========
* Name of the executable is school, rules all, and variables CC and SRC, where CC is compiler to be used, ie gcc compiler, and SRC is the .c file, or else source ordependencies.

Task 2
=======
* Create a usefule make file with name of executable school, rules all, and ariables CC, SRC, OBJ, and NAME, where they represent compiler to be used, gcc compiler, the .c files, the .o files, and name of the executable.
* All rule should recompile only the updated source files, and are not allowed to have a .o file.

Task 3
=======
* An executable named school.
* Rules: all, clean, 0clean, fclean, re where all builds your executable, clean deletes all Emacs and Vim files temporaty files along with executable, oclean deketes object files, fclean deletes all emacs and vim temporary files, th executable, and object files, and re forces the recimpilation of source files.
* Variables: CC, for compiler, SRC for source, .c files, OBJ for .o files, NAME for name of executable, RM for delete files.
    *The all rules should recompile only updated source files.
    *The clean, oclean, fclean, re rules shoyuld never fail.
    *Not allowed to have a list of all the .o files

Task 4
=======

