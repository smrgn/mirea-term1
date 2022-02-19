#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <list>
#include <iterator>
#include <Windows.h>
using namespace std;

/*int main() { //hm3.1
	float s, p, n, r, m;
	cout << "s:\n";
	cin >> s;

	cout << "n\n";
	cin >> n;

	cout << "p\n";
	cin >> p;

	r = p / 100;
	m = (s * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));

	if (p == 0) {
		m = s / (n * 12);
		cout << m << endl;
	}
	else if (s <= 0 || n <= 0) {
		cout << "MISTAKE" << endl;
	}
	else
		cout << m << endl;
	return 0;

}*/

/*int main() { //hm3.2
	float S, r, n, p, m, m_test, r1;

	cout << "S:\n";
	cin >> S;

	cout << "n:\n";
	cin >> n;

	cout << "m:\n";
	cin >> m;

	for (int r1 = -10000; r1 <= 10000; r1 = r1 + 1)
	{

		r = r1 * 0.0001f;
		p = r * 100;

			m_test = ((S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1)));

		if (p < 0) {
			if ((m_test < m + 0.005) && (m_test > m - 0.005)) {
				cout << "p : " << ceil(p) << endl;
			}
		}

		if (p >= 0) {
			if ((m_test < m + 0.0001) && (m_test > m - 0.0001)) {
				cout << "p : " << p << endl;
			}
		}



	}
	return 0;
}*/

/*int main() { //hm3.3
	string path = "task.txt";

	ofstream file;
	file.open(path);

	if (file.is_open()) {
		int count;
		cout << "count : ";
		cin >> count;
		for (int i = 0; i < count + 1; i++) {
			string in;
			getline(cin, in);
			file << in;
			file << "\n";
		}
	}
	file.close();

	ifstream f_read;
	f_read.open(path);

	if (!f_read.is_open()) {
		cout << "Error" << endl;
	}
	else {
		cout << "File is opened\n";
		char ch;
		while (f_read.get(ch)) {
			cout << ch;
		}
		cout << "\n";
	}
	f_read.close();

	return 0;
}*/
/*
int main() //3.4
{
	setlocale(0, "");
	string x;
	int i = 0;
	ifstream file;
	file.open("qq.txt");

	while (getline(file, x))
	{
		int len = x.length();
		for (i = 0; i < len; i++)
		{
			if (isdigit(x[i]))
			{
				cout << x[i];
			}
			else
			{
				cout << " ";
			}
		}
		cout << "" << endl;
	}

	file.close();
	return 0;
}*/

/*
int main() { //hm3.5

	char str[30];
	int cor[30];
	cin >> str;
	for (int i = 1; i < 30; i++) {
		for (int j = i; j > 0; j--) {
			int nj1, nj2;
			if (str[j] - 'a' >= 0) {
				nj2 = str[j] - 'a';
			}
			else {
				nj2 = str[j] - 'A';
			}
			if (str[j - 1] - 'a' >= 0) {
				nj1 = str[j - 1] - 'a';
			}
			else {
				nj1 = str[j - 1] - 'A';
			}
			if (nj1 > nj2) {
				char tmp = str[j];
				str[j] = str[j - 1];
				str[j - 1] = tmp;
			}
			else {
				break;
			}
		}
	}

	for (char c : str) {
		cout << c;
	}
	cout << "\n";

	system("pause");
	return 0;
}*/



