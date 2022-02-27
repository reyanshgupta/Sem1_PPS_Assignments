#include<iostream>
#include <math.h>

using namespace std;
int main() 
{
	float x1, y1, x2, y2, distance, midpt_x, midpt_y; //defining variables.
	cout << "Input x1: ";
    cin >> x1;
	cout << "Input y1: ";
	cin >> y1;
    cout << "Input x2: ";
	cin >> x2;
	cout << "Input y2: ";
	cin >> y2;
	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)); //calculating distance.
    midpt_x = (x1+x2/2); 
    midpt_y = (y1+y2/2); //calculating mid point
	cout << "Distance between the points: " << sqrt(distance);
	cout << endl;
    cout << "Mid point is: " << "(" << midpt_x << "," << midpt_y << ")";
    return 0;
}