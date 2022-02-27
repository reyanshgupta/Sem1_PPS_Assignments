
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
   
    if(n%2 != 0) { //checking if n is odd or even
        cout << "Weird" << endl;
    }
    else if(!(n%2) && n >= 2 && n <= 5){ //conditions specified - n greater than 2 and less than 5
        cout << "Not Weird" << endl;
    }
    else if(!(n%2) && n >= 6 && n <= 20){ //conditions specified - n greater than 6 and less than 20
        cout << "Weird" << endl;
    }
    else if(!(n%2) && n > 20){     //conditions specified - n greater than 20      
        cout << "Not Weird" << endl;
    }
    return 0;
}