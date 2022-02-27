#include <iostream>

using namespace std;

int main()    
{    
    int arr1[] = {1, 2, 3, 4, 5};         
    int length = sizeof(arr1)/sizeof(arr1[0]);    //size of the array
    int arr2[length];    
    for (int i = 0; i < length; i++) {     
        arr2[i] = arr1[i];     
    }       //making array 2
    cout << "Elements of original array: ";
    for (int i = 0; i < length; i++) {     
        cout << arr1[i];    
    }    
        
    cout << "\n";    
    
    cout<<"Elements of new array: "<< "\n";    
    for (int i = 0; i < length; i++) {     
        cout << arr2[i];    
    }    
    return 0;    
}    