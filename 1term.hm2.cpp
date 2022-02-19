#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <Windows.h>
using namespace std;

/*int main() { //hm2.1
	float h, R, r, l, V, S;
	cout << "h: \n";
	cin >> h;

	cout << "R: \n";
	cin >> R;

	cout << "r: \n";
	cin >> r;

	l = sqrt((r - R) * (r - R) + h * h);

	if (h > 0 && R > 0 && r > 0 && l > 0) {
		V = (M_PI * h * (R * R + R * r + r * r)) / 3;

		S = M_PI * (R * R + l * (R + r) + r * r);

		cout << "V" << " : " << V;
		cout << "S" << " : " << S;
	}
	else {
		cout << "mistake" << endl;
		return 0;
	}

	return 0;

}*/

/*int main() { //hm2.2
	float x, a, w;

	cout << "x\n";
	cin >> x;

	cout << "a\n";
	cin >> a;

	if (x == 0) {
		cout << "mistake" << endl;
	}
	else if (abs(x) < 1) {
		w = a * log(abs(x));

		cout << "w = " << w << endl;

	}
	else {
		if (a >= x * x) {
			w = sqrt(a - (x * x));

			cout << "w = " << w << endl;
		}
		else {
			cout << "a-x^2 < 0" << endl;
		}
	}
	return 0;
}*/

/*int main() { //hm2.3
	float x, y, b, z;
	cout << "x\n";
	cin >> x;

	cout << "y\n";
	cin >> y;

	cout << "b\n";
	cin >> b;

	if ((b > y) && (b >= x)) {
		z = log(b - y) * sqrt(b - x);
		cout << "z = " << z;
	}
	else {
		cout << "odz!" << endl;
	}

	return 0;
}*/

/*int main() { //hm2.4
	int N; // N - натуральное

	cout << "N: \n";
	cin >> N;

	if (N > 0) {
		for (int i = 1; i < 11; i++) {
			cout << i << "-" << N << endl;
			N++;
		}
	}
	else {
		cout << "N ne naturalnoe";
	}

	return 0;
}*/

/*float func(float x) { //hm2.5
	float y;
	y = ((x * x) - (2 * x) + 2) / (x - 1);
	return y;
}
int main() {
	float x, y;
	x = -4;

	cout << "    X    |    Y" << endl;
	cout << "------------------" << endl;

	while (x <= 4) {

		y = func(x);
		if (x != 1) {
			cout << fixed << setprecision(1) << x << "   |   " << fixed << setprecision(3) << y << endl;
		}
		else {
			cout << fixed << setprecision(1) << x << "   |   " << "     " << endl;
		}
		cout << "------------------" << endl;
		x = x + 0.5;
	}


	return 0;
}*/