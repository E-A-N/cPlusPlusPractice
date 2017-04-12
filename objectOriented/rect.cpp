#include<iostream>

using namespace std;

int main()
{
	double w;
	double h;
		cin >> w >> h;
	double area = w * h;
	double perimeter = 2*(h+w);
	cout << "Enter the width and height of a rectangle:" << " The area is " << area << " and the perimeter is " << perimeter << endl;
    return 0;
}
