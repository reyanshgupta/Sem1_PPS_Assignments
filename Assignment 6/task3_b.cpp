#include <iostream>

using namespace std;

int main(){
    char grade;
    cout << "Enter your grade: " ;
    cin >> grade;
    switch (grade){ //using switch to check grades 
        case 'A':
            cout << "Very good";
            break;
        case 'B':
            cout << "Good";
            break;
        case 'C':
            cout << "Moderate";
            break;
        default: 
            cout << "Try harder! ";
    }
    return 0;
}