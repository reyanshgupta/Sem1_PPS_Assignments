#include<iostream>

using namespace std;

int main(){
    int x, y;
    cout << "Enter the number of rows and columns in the array: ";
    cin >> x >> y;
    int arr[x][y];
    int i, j;
    cout<<"Input the 2D Array: \n";
    for(i=0;i<x;i++) {
        for(j=0;j<y;j++)
        {
            cout<<"Array["<<i<<"]["<<j<<"]=  ";
            cin>>arr[i][j];
        }
    } 
       
      cout<<"\nThe 2-D Array is:\n";
      for(i=0;i<x;i++)
      {
        for(j=0;j<y;j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
      }

    int choice;
    cout << "\n 1. Sum of elements of each row \n 2. Sum of diagonal elements \n 3. Finding transpose of matrix \n Enter choice: ";
    cin >> choice;
    if (choice == 1){
        int sumRow = 0;  
    for(int i = 0; i < x; i++){  
        for(int j = 0; j < y; j++){  
        sumRow = sumRow + arr[i][j];  
        }  
        cout << "\n Sum of rows: " << sumRow <<endl;  
        }
    }
    else if (choice == 2){
    int sum_left =0, sum_right = 0;
    for(int i=0; i<x ; i++){
        for(int j=0; j<y; j++){
            if(i==j)
            sum_left += arr[i][j];
            if((i+j) == y-1)
        sum_right += arr[i][j];
        }
    }
  cout << "Sum of Left Diagonal: "<< sum_left << endl;
  cout << "Sum of Right Diagonal: "<< sum_right << endl;
    }
    else if (choice == 3){
        int transpose[x][y];
            int i, j;
            for (i = 0; i < x; i++)
                for (j = 0; j < y; j++)
                    transpose[i][j] = arr[j][i];
        cout <<"Transpose matrix is \n";
        for (i = 0; i < x; i++){
            for (j = 0; j < y; j++)
            cout <<" "<< transpose[i][j];
            cout <<"\n";
    }
        }
  return 0;
}