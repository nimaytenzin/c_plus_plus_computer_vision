#include "tools.hpp"
#include <iostream>

int main(){
    MakeItRain();
    MakeItSunny();
    HelloFromToolsb();

    std::cout << "Please enter your age: \n";
    int age;
    std::cin >> age;

    std::cout << "Your age double is " << DoubleMyAge(age) <<std::endl;
    std::cout << "But Ten years from now you will be " << MyAgeTenYearsFromNow(age) << " years old! sad :( \n"; 

    return 0;
}