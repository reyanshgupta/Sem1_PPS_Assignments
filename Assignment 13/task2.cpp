#include <iostream>
using namespace std;

int factorial(int x){
    int num = 0, fact = 1;
    while (num <= x-1){
        fact = fact + fact * num;
        num++;
    }
    return fact;
}

int main(){
    int sum;
    sum = factorial(1)/1 + factorial(2)/2 +factorial(3)/3 + factorial(4)/4 + factorial(5)/5;
    cout << "The sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 is: " << sum;
    return 0;
}