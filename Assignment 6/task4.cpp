#include <iostream>

using namespace std;

int main(){
    int week_number;
    cout << "Enter the week number (1-7): ";
    cin >> week_number;

    switch (week_number){ //using switch to go through cases to display days of the week
       case 1: 
            cout<<"Monday";
            break;
        case 2:     
            cout<<"Tuesday";
            break;
        case 3: 
            cout<<"Wednesday";
            break;
        case 4:    
            cout<<"Thursday";
            break;
        case 5: 
            cout<<"Friday";
            break;
        case 6:     
            cout<<"Saturday";
            break;
        case 7: 
            cout<<"Sunday";
            break;
        default: cout<<"Invalid input! Please enter week no. between 1-7.";
    }
    return 0;
}