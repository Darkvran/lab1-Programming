#include <iostream>
#include <math.h>
using namespace std;

double mediana(double side1, double side2, double maxSide) {
	if (maxSide < side1 || maxSide < side2) {
		cout << "incorrect input. You should enter max side in third argument.";
		return 0;
	}
	return sqrt(2 * (side1 * side1 + side2 * side2) - maxSide * maxSide)

}

void main() {
	double a = 0, b = 0, c = 0;
	cin >> a >> b >> c;

	cout << mediana(a, b, c);
}