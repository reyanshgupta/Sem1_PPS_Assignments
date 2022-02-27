#include <iostream>

using namespace std;

int main(){
    float n, s=0, a, avg; 
    cout << "How many numbers: ";
    cin >> n;
    for (float c = 1; c<=n; c++) {
    cout << "Enter the number: ";
    cin >> a;
    s = s+a;
    }
avg = s/n;
cout << "Average is: " << avg;

return 0;
}