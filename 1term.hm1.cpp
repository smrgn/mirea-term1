#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

/*int main() { //hm1.1
	cout << "Viktoria" << endl;
	return 0;
}*/

/*int main() { //hm1.2
	float a, b;
	setlocale(LC_ALL, "ru");
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	cout << "a*b = " << a * b << endl;
	if (a == 0 && b == 0) {
		cout << "Error. Two numbers are zero. Input new values" << endl;
	}
	if (a != 0) {
		cout << "b/a = " << b / a << endl;
	}
	if (b != 0) {
		cout << "a/b = " << a / b << endl;
	}
	return 0;
}*/

/*int main() { //hm1.3
	float b, c, x;
	setlocale(LC_ALL, "ru");
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите c: " << endl;
	cin >> c;

	if (b == 0) {
		if (c == 0)
			cout << "x has an infinite number of solutions" << endl;

		else if (c != 0) {
			cout << "not solutions" << endl;
		}
	}
	else {
		cout << "x = " << -c / b << endl;
	}
	return 0;
}*/

/*int main() { //hm1.4
	float a, b, c, D, x1, x2, x;
	cout << "a" << endl;
	cin >> a;
	cout << "b" << endl;
	cin >> b;
	cout << "c" << endl;
	cin >> c;

	if (a == 0) {
		if ((b == 0) && (c == 0)) {
			cout << "x has an infinite number of solutions" << endl;
		}
		else if ((b == 0) && (c != 0)) {
			cout << "x has no solution" << endl;
		}
		else {
			cout << "x = " << -c / b << endl;
		}
	}
	else {
		D = b * b - 4 * a * c;
		if (D < 0) {
			cout << "x has not solution" << endl;
		}
		if (D == 0) {
			x = -b / 2 * a;
			cout << "x = " << x << endl;
		}
		if (D > 0) {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}

	return 0;
}*/

/*int main() { //hm1.5
	setlocale(LC_ALL, "Rus");
	bool day, svet, shtoru;
	cout << "Введите 1, если день, или 0, если ночь: \n";
	cin >> day;
	cout << "Введите 1, если раздвинуты шторы, или 0, если нет: \n";
	cin >> shtoru;
	cout << "Введите 1, если включен свет, или 0, если нет: \n";
	cin >> svet;
	if (((day == 1) && (shtoru == 1)) or (svet == 1)) {
		cout << "Светло\n";
	}
	else {
		cout << "Темно\n";
	}
	return 0;
}*/