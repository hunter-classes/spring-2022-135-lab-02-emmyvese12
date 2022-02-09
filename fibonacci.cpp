/*
Emmy Veselinov
CSCI 135 Lab-02

Task D: Write a program fibonacci.cpp, which uses an array of ints 
to compute and print all Fibonacci numbers from F(0) to F(59).

Fibonacci numbers is a sequence of numbers that starts with 
F(0) = 0 and F(1) = 1, with all the following numbers computed as the 
sum of two previous ones, F(n) = F(n−1) + F(n−2) --> 0, 1, 1, 2, 3, 5, 8, 13...

Observation: As it approaches 2 billion, (at the 47th term), the integer becomes negative
because it exceeds the range of values int can store. Int cannot go beyond 4 bytes which is 
2147483647 for the positive values.
*/

#include <iostream>

int main(){
    // create the array
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    std::cout << fib[0] << "\n" << fib[1] << "\n";
    for (int i = 2; i <= 59; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
        std::cout << fib[i] << "\n";
    }
    return 0;
}