#include<iostream>
using namespace std;

int main() 
{
    int intType;
    float floatType;
    double doubleType;
    char charType; //defining different types of variables.

    // size of function evaluates the size of a variable
    cout << "Size of int: " <<  sizeof(intType) << endl;
    cout << "Size of float: " << sizeof(floatType) << endl;
    cout << "Size of double: " << sizeof(doubleType) << endl;
    cout << "Size of char: " << sizeof(charType) << endl;
    
    return 0;
}