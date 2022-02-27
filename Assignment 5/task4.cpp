#include <iostream>

using namespace std;

int main (){
    int number;
    cout << "Enter Number: ";
    cin >> number;

    if (number%2 == 0 && number%3 == 0 && number%5 != 0){
        cout << "Conditions satisfied.";
    }
    else{
        cout << "Conditions not satisfied.";
    }
}