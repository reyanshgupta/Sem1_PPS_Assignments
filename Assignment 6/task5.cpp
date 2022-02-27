#include <iostream>

using namespace std;

int main(){
    char Choice;
    float num1,num2;
    cout << "Enter operator (A for add, S for subtract, M for multiply, D for division): ";
    cin >> Choice;
    Choice = toupper(Choice); //so that the lower case choices turn into upper case.
    cout << "Enter first operand: ";
    cin >> num1;
    cout << "Enter second operand: ";
    cin >> num2;

    switch (Choice){
        case 'A':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case 'S':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case 'M':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case 'D':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}