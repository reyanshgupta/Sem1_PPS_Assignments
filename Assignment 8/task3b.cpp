#include <iostream>
using namespace std;

int main()
{
    int count, rows, space, x = 1;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++){
        for (int space = i; space<rows; space++){ //for spaces to be calculated
            cout << " ";
        }
            for (int j = 1; j <= i; j++){ //for printing numbers
            cout << x++;
        }
cout << endl;
    }
    return 0;
}   