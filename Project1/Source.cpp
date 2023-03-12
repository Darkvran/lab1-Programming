#include <iostream>
#include <math.h>
#define pi 3.14159265

using namespace std;

double triangleCheck(double side1, double side2, double maxSide) {
	if (side1 + side2 > maxSide)
		return true;
	else
		return false;
}

double mediana(double side1, double side2, double maxSide) {
	if (maxSide < side1 || maxSide < side2) {
		cout << "incorrect input. You should enter max side in third argument.";
		return 0;
	}
	return sqrt(2 * (side1 * side1 + side2 * side2) - maxSide * maxSide);

}

void angles(double side1, double side2, double maxSide) {
	double cosinus1 = (side1 * side1 + maxSide * maxSide - side2 * side2) / (2 * side1 * maxSide);
	double cosinus2 = (side2 * side2 + maxSide * maxSide - side1 * side1) / (2 * side2 * maxSide);
	double angle1 = acos(cosinus1) * (180 / pi), angle2 = acos(cosinus2) * (180 / pi), angle3 = 180 - (angle1 + angle2);
	
	cout << angle1 << endl;
	cout << angle2 << endl;
	cout << angle3 << endl;
}

void main() {
	double a = 0, b = 0, c = 0;
	cout << "Enter 3 sides of triangle." << endl;
	cin >> a >> b >> c;
	if (triangleCheck(a, b, c) == true) {
		cout << mediana(a, b, c) << endl;
		angles(a, b, c);
	}
	else
		cout << "Triangle is not exist" << endl;
		
}