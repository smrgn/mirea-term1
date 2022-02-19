#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <list>
#include <iterator>
using namespace std;


int Inputint(int m, int M) {
	for (;;) {
		float valuea;
		cout << "Введите число. \n";
		if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M) && (floor(valuea) == valuea)) {
			return valuea;
			break;
		}
		if (cin.fail()) {
			cin.clear();
			cout << "Неверный ввод, повторите. \n";

		}
		else {
			cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";

		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}
}

/*
int main() { //hm4.1
	setlocale(LC_ALL, "Rus");
	int n = 0;
	int num;
	
	string text = "text4.1";
	ofstream file(text);

	if (!file.is_open()) {
		cout << "ошибка!\n";
	}
	else{
		cout << "Введите сколько цифр вы хотите посчитать: ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "Введите число: ";
			cin >> num;
			file << num;
			file << "\n";
		}
	}
	file.close();

	
	ifstream f_read(text);
	if (!f_read.is_open()) {
		printf("ошибка!\n");
	}
	else {
		int s;
		int sum = 0;
		cout << "Файл открыт\n";
		while (!f_read.eof()) {
			f_read >> s;
			sum += s;
		}
		sum -= s;
		cout << sum << endl;
	}
	return 0;
}*/

/*
int signx(float x) { //hm4.2 
	if (x > 0)
		return 1;
	else if (x == 0)
		return 0;
	return -1;
}

int main() {
	setlocale(LC_ALL, "rus");
	int a = 1;
	char q;
	while (a) {
		float x;
		cout << "Введите число: ";
		cin >> x;
		cout << signx(x) << endl;
		printf("Для выхода напишите Q: ");
		cin >> q;
		if (q == 'Q') {
			return 0;
		}
		printf("Вы не вышли из программы)\n");
	}
	return 0;

}*/

/*
double rectangle() { //hm4.3 
	float a, b;
	cout << "Введите длину: \n";
	cin >> a;
	cout << "Введите ширину: \n";
	cin >> b;
	if ((a <= 0) || (b <= 0)) {
		printf("Ты норм? Так нельзя.\n");
	}
	else {
		cout << "Площадь прямоугольника = " << a * b << endl;
	}
	return (a * b);
}

double triangle() {
	float a, b, c, s;
	float p = 0;
	cout << "Введите длины сторон: \n";
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a <= 0) || (b <= 0) || (c <= 0) || (a + b < c) || (a + c < b) || (c + b < a)) {
		printf("Ты норм? Так нельзя.\n");
	}
	else {
		p = (a + b + c) / 2.0;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Площадь треугольника = " << s << endl;
	}
	return s;
}

double circle() {
	float r;
	float pi = 3.14;
	cout << "Введите радиус: \n";
	cin >> r;
	if (r <= 0) {
		printf("Ты норм? Так нельзя.\n");
	}
	else {
		cout << "Площадь круга = " << pi*r*r << endl;
	}
	return (pi * r * r);
}

int main() {
	setlocale(LC_ALL, "rus");
	int i;
	cout << "Площадь какой фигуры вы хотите найти? Если прямоугольник напишите 1, если треугольник напишите 2, если круг - 3.\n";
	cin >> i;
	if (i == 1) {
		rectangle();
	}
	else if (i == 2) {
		triangle();
	}
	else if (i == 3) {
		circle();
	}
	else {
		cout << "Читай внимательнее!";
	}
	return 0;
}*/

/*
int main() { //hm4.4
	int x = 0;
	while (x < 6) {
		x++;
		int i = 0;
		while (i < 8) {
			printf("*");
			i++;
		}
		while (i < 35) {
			printf("-");
			i++;
		}
		printf("\n");
	}
	int q = 0;
	while (q < 7) {
		q++;
		int w = 0;
		while (w < 35) {
			w++;
			printf("-");
		}
		printf("\n");
	}
	return 0;
}
*/
/*
int main() { //hm4.5 
	for (double y = 1.1; y > -1.1; y -= 0.1) {
		for (double x = -4; x < 4; x += 0.1) {
			if (abs(sin(x) - y) < 0.05)
				std::cout << "*";
			else if (x<0.05 && x>-0.05)
				std::cout << "|";
			else if (y<0.05 && y>-0.05)
				std::cout << "-";
			else
				std::cout << " ";

		}
		std::cout << '\n';
	}
	return 0;
}*/


/* //hm4.6 римские
string II_(int x) {
    string sss = "";
    map <int, string> mp = { {1,"I"},{2,"II"},{3,"III"},{4,"IV"},{5,"V"},{6,"VI"},{7,"VII"},{8,"VIII"},{9,"IX"} };
    sss.append(mp[x]);
    return sss;
}
string XX_(int x) {
    string sss = "";
    map <int, string> mp = { {1,"X"},{2,"XX"},{3,"XXX"},{4,"XL"},{5,"L"},{6,"LX"},{7,"LXX"},{8,"LXXX"},{9,"XC"} };
    sss.append(mp[x]);
    return sss;
}
string CC_(int x) {
    string sss = "";
    map <int, string> mp = { {1,"C"},{2,"CC"},{3,"CCC"},{4,"CD"},{5,"D"},{6,"DC"},{7,"DCC"},{8,"DCCC"},{9,"CM"} };
    sss.append(mp[x]);
    return sss;
}
string MM_(int x) {
    string sss = "";
    map <int, string> mp = { {1,"M"},{2,"MM"},{3,"MMM"} };
    sss.append(mp[x]);
    return sss;
}

string arab_to_roman(int a) {
    string s1 = "";
    int j = trunc(a / 1000);
    s1.append(MM_(j));
    int ww = trunc(a / 100);
    int w = ww % 10;
    s1.append(CC_(w));
    int c = trunc((a % 100) / 10);
    s1.append(XX_(c));
    int d = a % 10;
    s1.append(II_(d));
    return s1;
}

int main() {
    setlocale(LC_ALL, "Russian");
    bool flag;
    string rim, cs, cs1, cs2;
    int summ = 0, slag = 0;
    map <string, int> mp = { {"M", 1000}, {"D", 500}, {"C", 100}, {"L", 50}, {"X", 10}, {"V", 5}, {"I", 1} };
    cout << "Введите римское число: ";
    cin >> rim;
    for (int i = 0; i < rim.size(); i++) {
        flag = true;
        cs = rim[i];
        if (i != rim.size() - 1) {
            cs1 = rim[i + 1];
            if (mp[cs] < mp[cs1]) {
                summ = summ - mp[cs];
                flag = false;
            }
        }
        if (flag) {
            summ += mp[cs];
        }
    }
    if (arab_to_roman(summ) == rim) {
        cout << summ << endl;
        cout << "\n";
        main();
    }
    else {
        cout << "Данные некорректны\n" << endl;
        main();
    }
}

}*/

/*
int option1() { //4.7 рандом
	srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int n, m, i, c, s;
    m = 37;
    i = 3;
    c = 64;
    cout << "Введите количество чисел" << endl;
    n = Inputint(0, 2147483647);
        s = (rand() * 13 - 65) % 2;
    for (int k = 1; k <= n; k++)
    {
        s = (m * s + i) % c;
        cout << s << endl;
    }
    return 0;
}
int option2() {
	srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int n, m, i, c, s;
    m = 25173;
    i = 13849;
    c = 65537;
    cout << "Введите количество чисел" << endl;
    n = Inputint(0, 2147483647);
    s = (rand() * 13 - 65) % 2;
    for (int k = 1; k <= n; k++)
    {
        s = (m * s + i) % c;
        cout << s << endl;
    }
    return 0;
}
int main() { 
	setlocale(LC_ALL, "rus");
	bool f = true;
	do {
		cout << "Выберите вариант решения\n№1 = 1 вариант\n№2 = 2 вариант\n";
		int i = Inputint(1, 2);
		if (i == 1) {
			option1();
		}
		else {
			option2();
		}
		cout << "если вы хотите продолжить, введите 1. Чтобы закончить эту программу , введите 0.\n";
		int q = Inputint(0, 1);
		if (q == 0) {
			f = false;
			continue;
		}
	} while (f);

	return 0;
} */

/* //4.8 МАТРИЦЫ
//Функция ввода интовой переменной с клавиатуры с проверкой на введенные неккоректные символы с заданным диапазоном значений
int Inputint(int m, int M) {
    for (;;) {
        float valuea;
        std::cout << "Введите число. \n";
        if ((std::cin >> valuea).good() && (m <= valuea) && (valuea <= M) && (floor(valuea) == valuea)) {
            return valuea;
            break;
        }
        if (std::cin.fail()) {
            std::cin.clear();
            std::cout << "Неверный ввод, повторите. \n";

        }
        else {
            std::cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";

        }
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
}

//Функция ввода float переменной с клавиатуры с проверкой на введенные неккоректные символы с заданным диапазоном значений
float Inputfloat(int m, int M) {
    for (;;) {
        float valuea;
        cout << "Введите число. \n";
        if ((cin >> valuea).good() && (m <= valuea) && (valuea <= M)) {
            return valuea;
            break;
        }
        if (cin.fail()) {
            cin.clear();
            cout << "Неверный ввод, повторите. \n";

        }
        else {
            cout << "Число вне допустимого диапазона значений. Повторите ввод. \n";

        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
}

double max_money(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    float tmp2 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 1; j <= col2;) {
            tmp = m[i][j] - m[i][j + 1];
            if (tmp > tmp1) {
                tmp2 = tmp;

            }
            tmp1 = tmp;
            break;
        }
    }
    return tmp2;
}
double max_money_all(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 1; j <= col2;) {
            tmp = m[i][j];
            tmp1 += tmp;
            break;
        }
    }
    return tmp1;
}
double max_clear_money_all(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 1; j <= col2;) {
            tmp = m[i][j] - m[i][j + 1];
            tmp1 += tmp;
            break;
        }
    }
    return tmp1;
}
double max_commission_all(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 2; j <= col2;) {
            tmp = m[i][j];
            tmp1 += tmp;
            break;
        }
    }
    return tmp1;
}
double max_commission(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 0;
    float tmp2 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 2; j <= col2;) {
            tmp = m[i][j];
            if (tmp > tmp1) {
                tmp2 = tmp;

            }
            tmp1 = tmp;
            break;
        }
    }
    return tmp2;
}
double min_commission(double** m, int col2, int row1) {
    float tmp = 0;
    float tmp1 = 10000000;
    float tmp2 = 0;
    for (int i = 2; i - 1 <= row1; i++) {
        for (int j = 2; j <= col2;) {
            tmp = m[i - 1][j];
            if (tmp < tmp1) {
                tmp2 = tmp;

            }
            tmp1 = tmp;
            break;
        }
    }
    return tmp2;
}
double min_money(double** m, int col2, int row1, float maxmoney) {
    float tmp2 = 0;
    for (int i = 1; i <= row1; row1--) {
        for (int j = 1; j <= col2;) {
            float tmp = m[row1][j] - m[row1][j + 1];
            if (tmp < maxmoney) {
                tmp2 = tmp;
            }
            maxmoney = tmp;
            break;
        }
    }
    return tmp2;
}
double comparisonmoney(double** m, int col2, int row1, float tmp2) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 1; j <= col2;) {
            tmp = m[i][j] - m[i][j + 1];
            if (tmp2 == tmp) {
                tmp1 = i;
                return tmp1;
            }
            break;
        }
    }
}
double comparisoncommission(double** m, int col2, int row1, float tmp2) {
    float tmp = 0;
    float tmp1 = 0;
    for (int i = 1; i <= row1; i++) {
        for (int j = 2; j <= col2;) {
            tmp = m[i][j];
            if (tmp2 == tmp) {
                tmp1 = i;
                return tmp1;
            }
            break;
        }
    }
}
int main() {
    setlocale(LC_ALL, "Rus");
    int row1, row2, col1, col2;
    double** m, **m1, **m2;
    cout << "запишите количество разновидностей товаров для продавцов от 1 до 10. \n";
    col1 = Inputint(1, 10);//может быть от 1 до 10 продавцов
    cout << "запишите количество продавцов от 1 до 10. \n";
    row1 = Inputint(1, 10);//может быть от 1 до 10 товаров
    bool mas1 = true;
    bool mas2 = true;
    int check1 = 0;
    col2 = 2;
    row2 = col1;
    do {//Ввод 1 матрицы
        int check = 0;
        m1 = new double* [row1];
        cout << "Введите 1 матрицу. \n";
        for (int i = 1; i <= row1; i++) {
            m1[i] = new double[col1];
            cout << "Введите количество товаров для " << i << " продавца. \n";
            for (int j = 1; j <= col1;) {
                cout << "m1[" << i << "][" << j << "]= ";
                cout << "Введите количество товара типа (" << j << ") для " << i << " продавца. \n";
                m1[i][j] = Inputfloat(0, 2147483647);
                j++;
            }

        }
        for (int l = 1; l <= row1;) {
            check1 = 0;
            for (int r = 1; r <= col1;) {
                if (m1[l][r] == 0)
                    check1++;
                r++;
            }
            if (check1 == col1) {
                cout << "Вы ввели 0 товаров для " << l << " продавца! Попробуйте еще раз. \n";
                cout << "Хотите продолжить ? \n1 = изменить количество \n0 = продолжить без изменений \n";
                int n = Inputint(0, 1);
                if (n == 1) {
                    mas1 = true;
                    check++;
                }
                else
                    mas1 = false;

            }
            else
                mas1 = false;
            l++;
        }
        if (check > 0)
            mas1 = true;
    } while (mas1);//закончили ввод 1 матрицы
    cout << "Матрица продавца-(ов) к товару: \n";
    for (int i = 1; i <= row1; i++) {//вывод на экран 1 матрицы
        cout << "|";
        for (int j = 1; j <= col1; j++) {
            cout << m1[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
    do {//ввод 2 матрицы в программу
        check1 = 0;
        m2 = new double* [row2];
        cout << "Введите 2 матрицу. \n";
        for (int i = 1; i <= row2; i++) {
            cout << "Введите цену/комиссию для " << i << " товара. \n";
            m2[i] = new double[col2];
            for (int j = 1; j <= col2;) {
                cout << "m2[" << i << "][" << j << "]= ";
                m2[i][j] = Inputfloat(0, 2147483647);
                j++;
            }
        }
        for (int l = 1; l <= row2;) {
            if (m2[l][1] == 0) {//проверка на ценник = 0
                cout << "Цена не может быть равна 0 для " << l << " товара! Попробуйте еще раз. \n";
                check1++;
            }
            l++;
        }
        for (int l = 1; l <= row2;) {
            if (m2[l][1] - m2[l][2] < 0) {//проверка на то что комиссия больше чем цена
                cout << "комиссия не может быть больше цены у " << l << " товара! Попробуйте еще раз. \n";
                check1++;
            }
            l++;
        }
        if (check1 == 0)
            mas2 = false;
    } while (mas2);
    cout << "Матрица цены к комиссии: \n";//вывод 2 матрицы
    for (int i = 1; i <= row2; i++) {
        cout << "|";
        for (int j = 1; j <= col2; j++) {
            cout << m2[i][j] << " ";
        }
        cout << "|";
        cout << endl;

    }
    m = new double* [row1];//перемножение матрицы
    for (int i = 1; i <= row1; i++)
    {
        m[i] = new double[col2];
        for (int j = 1; j <= col2; j++)
        {
            m[i][j] = 0;
            for (int k = 1; k <= col1; k++)
                m[i][j] += m1[i][k] * m2[k][j];
        }
    }
    cout << "Прибыль/комиссия \n";//вывод перемноженной матрицы
    for (int i = 1; i <= row1; i++) {
        cout << "|";
        for (int j = 1; j <= col2; j++) {
            cout << m[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
    cout << "Вывод работы программы: \n";
    for (int r = 1; r <= row1; r++) {
        if (m[r][1] == 0)
            cout << "У " << r << " продавца указано 0 товаров. \n";
    }
    float maxmoney = max_money(m, col2, row1);
    int personal_max_money = comparisonmoney(m, col2, row1, maxmoney);
    double minmoney = min_money(m, col2, row1, maxmoney);
    int personal_min_money = comparisonmoney(m, col2, row1, minmoney);
    float maxcommission = max_commission(m, col2, row1);
    int personal_max_commission = comparisoncommission(m, col2, row1, maxcommission);
    float mincommission = min_commission(m, col2, row1);
    int personal_min_commission = comparisoncommission(m, col2, row1, mincommission);
    float maxmoneyall = max_money_all(m, col2, row1);
    float maxclearmoneyall = max_clear_money_all(m, col2, row1);
    float maxcommissionall = max_commission_all(m, col2, row1);
    cout << "Наибольшая выручка будет у " << personal_max_money << " продавца. Выручка = " << maxmoney << endl;
    cout << "Наименьшая выручка будет у " << personal_min_money << " продавца. Выручка = " << minmoney << endl;
    cout << "Наибольшая комиссия будет у " << personal_max_commission << " продавца. Комиссия = " << maxcommission << endl;
    cout << "Наименьшая комиссия будет у " << personal_min_commission << " продавца. Комиссия = " << mincommission << endl;
    cout << "Общая чистая выручка будет = " << maxclearmoneyall << endl;
    cout << "Общая комиссия будет = " << maxcommissionall << endl;
    cout << "Общая выручка будет = " << maxmoneyall << endl;
}
*/

/* //4.9 системы счисления
bool check(int a) {
	if (a == -1) return false;
	else return true;
};
int to_dig(char a, int base) {
	string digits = "0123456789ABCDEF";
	bool flag = false;
	for (int i = 0; i < base; i++) {
		if (a == digits[i]) {
			flag = true;
			return i;
			break;
		}
	}
	if (!flag) return -1;
}
char to_str(int i) {
	string digits = "0123456789ABCDEF";
	return digits[i];
}
string reverse(string str) {
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
	return str;
}

int main() { 
	setlocale(LC_ALL, "rus");
	while (TRUE) {
		string in, temp, out;
		int base1, base2;
		int dec = 0, t;
		int sign = 0;

		cout << "Введите число в исходной с.с.: ";
		cin >> in;
		cout << "Введите исходное основание: ";
		cin >> base1;
		if (base1 > 16 || base1 <= 0) { cout << "Не верное основание, повторите ввод\n\n\n"; return 0; }
		cout << "Введите требуемое основание: ";
		cin >> base2;
		if (base2 > 16 || base2 <= 0) { cout << "Не верное основание, повторите ввод\n\n\n"; return 0; }

		if (in[0] == '-') {
			sign = 1;
			in.erase(0, 1);
		}

		for (int i = 0; i < in.length(); i++) {
			t = to_dig(in[i], base1);
			if (check(t)) {
				dec += t * pow(base1, in.length() - 1 - i);
			}
			else { cout << "Неверный ввод\n\n\n"; return 0; }
		}

		while (dec > 0) {
			t = dec % base2;
			dec /= base2;
			out += to_str(t);
		}
		out = reverse(out);
		cout << "Результат: ";
		if (sign == 1) cout << "-";
		cout << out << "\n\n\n";
	}
};

int translate(string in, int base1, int base2) {
	string temp, out;
	int dec = 0, t;
	int sign = 0;

	if (base1 > 16 || base1 <= 0) { cout << "Неверное основание, повторите ввод\n\n\n"; return 0; }
	if (base2 > 16 || base2 <= 0) { cout << "Неверное основание, повторите ввод\n\n\n"; return 0; }

	if (in[0] == '-') {
		sign = 1;
		in.erase(0, 1);
	}

	for (int i = 0; i < in.length(); i++) {
		t = to_dig(in[i], base1);
		if (check(t)) {
			dec += t * pow(base1, in.length() - 1 - i);
		}
		else { cout << "Неверный ввод\n\n\n"; exit(0); }
	}

	while (dec > 0) {
		t = dec % base2;
		dec /= base2;
		out += to_str(t);
	}
	out = reverse(out);
	if (sign == 1) cout << "-";
	int n = atoi(out.c_str());
	return n;
};
}*/

