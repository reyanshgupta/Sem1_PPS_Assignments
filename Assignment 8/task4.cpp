#include<iostream>

using namespace std;
int main(){
    int number,sum;
    do{
        cout << "Enter the number: ";
        cin >> number;
        if (number%3!=0 && number > 0){
            sum = sum + (number*number);
        }
        else{
            continue;
        }
    }
    while(number>0);
    cout << "The sum of squares of number is: " << sum;
return 0;
}
  