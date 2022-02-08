/*
Emmy Veselinov
CSCI 135 Lab-02

Task B: Write a program that consists of two files, main.cpp and funcs.cpp. 
You will also need a header file named funcs.h

In funcs.cpp write a void function named print_interval(int L, int U) 
that will accept two integer parameters and will print the output as 
specified in the main lab. Test this function by calling it from the main 
function which should be defined in main.cpp.
*/

#include <iostream>
#include "funcs.h"

int main(){
    int L = -2;
    int U = 4;
    std::cout << "\nIntegers from " << L << " to " << U << ": ";
    print_interval(L, U);
    std::cout << "\n";

    L = -5;
    U = 10;
    std::cout << "\nIntegers from " << L << " to " << U << ": ";
    print_interval(L, U);
    std::cout << "\n";

    L = -6;
    U = 1;
    std::cout << "\nIntegers from " << L << " to " << U << ": ";
    print_interval(L, U);
    std::cout << "\n";
}

