/*
Emmy Veselinov
CSCI 135 Lab-02

Task A: Write a program valid.cpp, which asks the user to input an integer
 in the range 0 < n < 100. If the number is out of range, the program should 
 keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main(){
    int userint;
    int squared;
    std::cout << "Please enter an integer: ";
    std::cin >> userint;
    while (userint < 1 || userint > 99){
        std::cout << "Please re-enter: ";
        std::cin >> userint;
    }
    squared = userint * userint;
    std::cout << "\n" << "Number squared is " << squared << "\n";
    
    return 0;
}
