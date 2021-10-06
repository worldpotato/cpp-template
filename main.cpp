/**
 * @file main.cpp
 * @author Worldpotato
 * @date 2021-09-20
 * @brief The Main file of this template, where all the magic starts.
 *
 * The main file is the starting point of each project.
 */

#include "printer/printer.hpp"
#include <iostream>

/**
 * This is the main where all the magic starts.
 *
 */
int main(int argc, char** argv)
{
    printer p;
    if (argc > 1) {
        p = printer(argv[1]);
        p.print();
    }
    p.print("hello world!");
    return 0;
}
