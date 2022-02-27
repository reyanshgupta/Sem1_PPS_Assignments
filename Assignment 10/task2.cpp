#include <iostream>
using namespace std;
 
int decimalToBinary(int n)
{
    int binaryNumber[32];
    int i = 0;
    while (n > 0) {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNumber[j];
    
    return 0;
}
 
int main()
{
    int n;
    cout << "Enter number whose binary equivalent has to be printed: ";
    cin >> n;
    decimalToBinary(n);
    return 0;
}
