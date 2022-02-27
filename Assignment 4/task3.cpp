#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout << "Enter value for first number: ";
cin >> a;
cout << "Enter value for second number: ";
cin >> b;
cout << "Enter value for third number: ";
cin >> c;

int max=(a>b)?(a>c)?a:c:(b>c)?b:c; //using conditional operator for comparison
cout<< "The biggest numger is: " << max; 

}