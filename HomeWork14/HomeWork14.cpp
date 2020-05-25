#include <iostream>
#include <string>

int main()
{
    std::string str("Hello, World!");
    int strLength = str.length();
    char fristSymbol = str.at(0), lastSymbol = str.at(strLength - 1);
    std::cout << "currents string is: " << str << " String length is: " << strLength
        << ". First symbol is: " << fristSymbol << ". Last symbol is: " << lastSymbol;
}