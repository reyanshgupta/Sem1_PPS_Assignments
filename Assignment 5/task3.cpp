#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0){  //to check if it satisfies the conditions to be a leap year
        if (year % 100 == 0){
            if (year%400 !=0){
                cout << "Not a leap year";
            }
            else{
                cout << "Leap year";
            }
        }
        else{
            cout << "Leap year";
        }
        }
    else{
     cout << "Not a leap year";
            }
}