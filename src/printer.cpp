#include "printer.hpp"
#include <iostream>

printer::printer()
{
   print_output = ""; 
}

printer::printer(std::string input)
{
    print_output = input;
}

int printer::print()
{
    if (print_output.length() == 0){
        return 1;
    }
    else {
        std::cout << print_output << std::endl;
    }
    return 0;
}

int printer::print(std::string input)
{
    std::cout << input << std::endl;
    return 0;
}

