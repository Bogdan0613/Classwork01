#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float F, xbegin, xend, xd;
	float a, b, c;
	cout << "Enter xbegin, xend of the function:";
	cin >> xbegin >> xend;
	cout << "Enter the coefficients(a, b, c):";
	cin >> a >> b >> c;
	cout << "Enter the step of the function:";
	cin >> xd;
	double x = xbegin;
	while (x <= xend) {
		if (x + c < 0 && a != 0) {
			F = (-a) * (pow(x, 3)) - b;
		}
		else {
			if (x + c > 0 && a == 0) {
				F = (x - a) / (x - c);
			}
			else {
				if (c != 0 && x != 0) {
					F = (x / c) + (c / x);
				}
				else {
					cout << "error";
				}
			}

		}
		x += xd;
		if ( ( ((int)a ^ (int)b) | ((int)a ^ (int)c) ) != 0) {
			cout << "f(x) = " << F;
		}
		else {
			cout << "f(x) = " << (int)F;
		}
	}
}
