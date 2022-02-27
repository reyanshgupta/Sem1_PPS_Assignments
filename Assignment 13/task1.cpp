#include <iostream>
using namespace std;

int checkArmstrong(int num){
    int lastDigit = 0, power = 0, sum = 0;
    int n = num; // Temporary variable
    while(n!=0) {
        lastDigit = n % 10;
        power = lastDigit*lastDigit*lastDigit;
        sum += power;
        n /= 10;
    }
    if(sum == num) 
    return 0;

    else 
    return 1;
}
int main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (checkArmstrong(number) == 0)
        cout << number << " is an Armstrong number. ";
    else
    cout << number << " is not an Armstrong number.";

    return 0;
}