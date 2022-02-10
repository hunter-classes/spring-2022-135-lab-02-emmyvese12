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

// lower and upper bounds 
// L <= i < U separated by spaces (it will include the lower limit, but exclude the upper)

void print_interval(int L, int U){
    // starting at the lower bound --> the condition: the num has to be lower than 
    // the upper bound, if true, the num is increased each time

    for (int num = L; num < U; num++) {
        std::cout << num << " ";
    }

}