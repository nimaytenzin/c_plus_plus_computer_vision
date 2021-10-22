There is tools library
    tools.hpp //header file declares the follwing function
        void MakeItRain();  -> defintion found in tools.cpp
        void MakeItSunny(); --> Defintion found in tools.cpp
        void HelloFromToolsb();  ->> defition/implementation found in toolb.cpp
        int DoubleMyAge( int age); -> defintion found in age.cpp
        int MyAgeTenYearsFromNow(int ageNow); ->defition found ina age.cpp

    modules 
        ---- tools.cpp
        ---- toolb.cpp
        ---- age.cpp 
    1) Compile the modules into object file using
        c++ -std=c++17 -c tools.cpp -o tools.o
        c++ -std=c++17 -c toolb.cpp -o toolb.o
        c++ -std=c++17 -c age.cpp -o age.o
    2) Create a tools libarary containing all the object implementation files
        ar rcs libtools.a tool.o toolb.o age.o 
    3) the main.cpp includes the tools.hpp lib and implements the methods defined in toolslibarary
    4) during the build link the libtools.a 
        c++ -std=c++17 main.cpp -L . -ltools -o main
    5) run the executable output main
        ./main
     