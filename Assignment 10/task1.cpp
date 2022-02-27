#include<iostream>

using namespace std;
int main ()
{
    int size, i, max, min;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size]; 
    cout << "Enter the elements of the array : ";
    for (i = 0; i < size; i++)
        cin >> array[i];    
    max = array[0];
    for (i = 0; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    min = array[0];
    for (i = 0; i < size; i++)
    {
        if (min > array[i])
            min = array[i];
    }           //sorting the array in increasing order.
    cout << "Largest element of the array is: " << max << endl;
    cout << "Smallest element of the array is: " << min;

    return 0;
}