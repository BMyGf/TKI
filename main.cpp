#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

double GetA (const double x, const double y, const double z);
double GetB(const double x, const double y, const double z);
int main() {
	const double x = 1.426;
	const double y = -1.22;
	const double z = 3.5;
	const auto a = GetA(x, y, z);
	const auto b = GetB(x, y, z);
	cout << " x = " << x << "\n y = " << y << "\n z = " << z << "\n a = " << a << "\n b = " << b;
	return 0;
}
double GetA(const double x, const double y, const double z) {
	const double Pi = 3.141592653589793;
	// Ввел число Пи
	return (cos(x) * (x - Pi / 6)) / (1 / 2 + (pow(sin(x), 2) * y));
}
double GetB(const double x, const double y, const double z) {
	return 1 + (pow (z , 2)) / (3 + (pow(z , 2) / 5));
}