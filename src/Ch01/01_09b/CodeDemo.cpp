// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main()
{
    std::string name1;
    
    std::cout << "Whats your Name: " << std::flush;
    std::cin >> name1;

    std::cout << "Welcome " << name1 << "!" << std::endl;

    return 0;
}