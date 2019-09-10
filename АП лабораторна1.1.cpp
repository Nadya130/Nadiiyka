#include <iostream>
#include <cmath>
using namespace std;
void main() {
	int a = 1000;

	float b = 0.0001;
	float r1, r2, r3, res1;
	double c = 0.0001;
	double r4, r5, r6, res2;
	r1 = pow(a - b, 3) - (pow(a, 3);
	r2 = pow(a, 3) - 3 * pow(a, 2) * b;
	r3 = pow(b, 3) - 3 * a * pow(b, 2);
	res1 = (r1 - r2) / r3;
	r4 = pow(a - c, 3) - (pow(a, 3);
	r5 = pow(a, 3) - 3 * pow(a, 2) * c;
	r6 = pow(c, 3) - 3 * a * pow(c, 2);
	res2 = (r4 - r5) / r6;
	cout << "result for float=" << res1 << endl;
	cout << "result for double=" << res2 << endl;

	system("pause");
}

