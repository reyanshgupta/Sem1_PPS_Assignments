#include <iostream>

using namespace std;

int main(){
    int terms, t1=0, t2=1, nextTerm=0;
    cout << "How many terms do you want to be printed: ";
    cin >> terms;
    
    for (int c = 1; c <= terms; ++c){
        if(c == 1){
            cout << t1 << ", ";
            continue;
        }
        if (c==2){
            cout << t2 << ", ";
            continue;
        }
    nextTerm = t1+t2;
    t1 = t2;
    t2 = nextTerm; //assigning value of previous terms to the new term.

    cout << nextTerm << ", ";
    }
return 0;
}