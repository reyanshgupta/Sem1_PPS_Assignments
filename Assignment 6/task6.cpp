#include <iostream>
#include <math.h> //including math files to use power function and square root function

using namespace std;

int main(){
    int choice, number, power;             
    cout << "Enter your choice 1 for square root and 2 for power of the number: ";
    cin >> choice;
    cout << "Enter number: ";
    cin >> number;

    switch(choice){
        case 1:
            cout << "Square root of number is: " << sqrt(number); //sqrt (argument) finds the square root of the argument provided to the function
            break;
        case 2:
            cout << "Enter the power for the number to be raised to: ";
            cin >> power;
            cout << "Power of number is: " << pow(number, power); //pow (number, power) finds the value of the number raised to the power
            break;
        default: 
            cout << "Invalid choice";
    }
    return 0;
}