/*
Emmy Veselinov
CSCI 135 Lab-02

Task C: Write a program edit-array.cpp that creates an array of 
10 integers, and provides the user with an interface to edit any 
of its elements.
The program should keep running until the user inputs an out-of-range 
(invalid) index.
*/

#include <iostream>

int main(){
    // make an array and fill it with 1
    int myData[10];
    for (int i = 0; i < 10; i++){
        myData[i] = 1;
        // print out the array
        std::cout << myData[i] << " ";
    }
    
    int i, v; // index, value variables
    do {
        std::cout << "\n";
        std::cout << "\nInput index: ";
        std::cin >> i;
        std::cout << "\nInput value: ";
        std::cin >> v;

        if (i >= 0 && i < 10){ // if the index is within 0 <= 1 < 10, update the asked cell
            myData[i] = v;
            std::cout << "\n";

            for (int i = 0; i < 10; i++){
                std::cout << myData[i] << " ";
            }
        }
        else { // otherwise, exit the program
            std::cout << "\nIndex out of range. Exit." << std::endl;
        }
    }
        while (i >= 0 && i < 10); // while the index is between the range, keep repeating the loop until it isn't
        return 0;

}