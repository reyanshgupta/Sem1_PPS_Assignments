#include <iostream>

using namespace std;

int main(){
    int node, curValue, count;  
    cout << "Enter value for node: ";
    cin >> node;
    switch (node){  //using switch to check different cases 
        case 15:
            curValue += 5;
            count++;
        case 40: 
            curValue *= 1.5;
            count ++;
        default:  //default is like the else statement as it runs only if the cases aren't true
            curValue -=2;
    }
    return 0;
}
