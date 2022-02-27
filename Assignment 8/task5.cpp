#include <iostream>
#include <math.h>
using namespace std;

int main()
{   
    cout << "Prime Numbers between 1 and 100 are:\n";
    for(int i=2;i<=100;++i){  //loop to check for each number in the range
        int count=0; //to count factors
        for(int j=2;j<=sqrt(i);++j){ //checking for factors
            if(i%j==0){
                count++; //increasing factor count when found so that composite numbers aren't printed
            }
        }
        if(count==0){ //checking and printing prime number
            cout<<i<<" ";
        }
    }
    return 0;
}