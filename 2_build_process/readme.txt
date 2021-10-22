1) Pre process
    c++ -E main.cpp >main.i

    removes comments, includes headers and expands macros

2) Compilation
    c++ -S main.i 
    compiles to assembly language

3) assembly
    c++ -c main.s  
    convert into object file
4) Linking
    c++ main.o -o main