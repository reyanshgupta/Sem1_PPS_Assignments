#include <iostream>
#include <math.h>

using namespace std;

int fact(int n)
{
    int i,factorial=1,sum1;
    for(i=1;i<=n;i++){
        factorial=factorial*i;
        sum1 = sum1 + factorial;
    }
    return factorial;
    return 0;
}
int main(){
    float n = 1, x, count = 1, sum, f, power;
    cout << "Enter the number of terms you want to be printed: ";
    cin >> n;
    cout << "Enter the value of x: ";
    cin >> x;
    while (count<=n){
            f = fact(count);
            power = pow(x,count);
            sum = sum + (power/f);
            count ++;
            }
    cout << "Sum of series is: " << 1 + sum;
    return 0;
}

