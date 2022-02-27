#include <iostream>

using namespace std;

int main(){
    float n, s=0, c=1, a, avg; 
    cout << "How many numbers: ";
    cin >> n;
    while (c<=n){
    cout << "Enter the number: ";
    cin >> a;
    s = s+a;
    c ++;
    }
avg = s/n;
cout << "Average is: " << avg;

return 0;
}