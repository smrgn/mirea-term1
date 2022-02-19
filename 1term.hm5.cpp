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

/*int NOD(int a, int b) { //hm5.1.1
	while (a != 0 and b != 0) {
		if (a > b) {
			a %= b;
		}
		else {
			b %= a;
		}

	}
	return (a + b);
}

int main() {

	int x1, x2;

	cin >> x1;
	cin >> x2;

	cout << NOD(x1, x2) << endl;

	return 0;
}
*/

/*int NOD(int A, int B) { //5.1.2
	while (A != B) {
		if (A > B) {
			A -= B;
		}
		else {
			B -= A;
		}
		return A;
	}
}

int main() {

	int x1, x2;

	cin >> x1;
	cin >> x2;

	cout << NOD(x1, x2) << endl;

	return 0;
}*/

/*int NOD(int a, int b) { //5.1.3
	if (a % b == 0) {
		return b;
	}
	if (b % a == 0) {
		return a;
	}
	if (a > b) {
		return NOD(a % b, b);
	}
	return NOD(a, b % a);
}

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << NOD(a, b) << endl;
	return 0;
}
*/

/*int prime(int a) { //hm5.2
	for (int i = 2; i < sqrt(a) + 1; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int a = 0;
	setlocale(LC_ALL, "Rus");

	cout << "Введите число\n";
	cin >> a;

	for (int i = 2; i < a; i++) {
		if (prime(i)) {
			cout << i << endl;
		}

	}
	return 0;
}*/

/*
int main() { //14 обр текст файла
	SetConsoleCP(1251); //чтобы русский текст мог выводиться
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	string path = "text.txt";
	int n = 0;

	ofstream file;
	file.open(path);

	if (!file.is_open()) {
		cout << "ошибка\n";
	}
	else {
		cout << "Введите сколько строчек будет в вашем тексте: ";
		cin >> n;
		for (int i = 0; i < n + 1; i++) {
			string in;
			getline(cin, in);
			file << in;
			file << "\n";
		}
	}
	file.close();

	ifstream fin;
	fin.open(path);

	if (!fin.is_open()) {
		cout << "ошибка\n";
	}
	else {
		cout << "\nфайл открыт\n";
		char ch;
		while (fin.get(ch)) {
			cout << ch;
		}
		cout << "\n";
	}
	fin.close();
	cout << "файл закрыт\n";

	int l;
	ofstream new_f;
	new_f.open(path, ofstream::app);

	if (!new_f.is_open()) {
		cout << "ошибка\n";
	}
	else {
		cout << "Введите сколько строк вы хотите добавить: ";
		cin >> l;
		for (int x = 0; x < l + 1; x++) {
			string str;
			getline(cin, str);
			new_f << str;
			new_f << "\n";
		}
	}
	new_f.close();

	ifstream fin_n;
	fin_n.open(path);

	if (!fin_n.is_open()) {
		cout << "ошибка\n";
	}
	else {
		cout << "\nфайл открыт\n";
		char chr;
		while (fin_n.get(chr)) {
			cout << chr;
		}
		cout << "\n";
	}
	fin_n.close();
	cout << "файл закрыт\n";

	return 0;
}*/

/*
bool slovacheck(string s) {  //ряды 26
	int k = 0;
	for (auto j : s) {
		if (j == ' ') {
			k++;
		}
		if (k >= 2) {
			return true;
		}
	}
	return false;

}
string slovo(string s) {
	int k = 0;
	string rez;
	for (auto j : s) {
		if (k >= 3) {
			break;
		}
		if (k == 2) {
			rez += j;

		}

		if (j == ' ') {
			k++;
		}

	}
	if (k >= 3) {
		return rez.erase(rez.size() - 1, 1);
	}
	return rez;
}

int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string s;
	cout << "Введите строку: ";
	while (!(getline(cin, s)) || !(slovacheck(s))) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Введите строку, с кол-вом слов больше 2\n";
	}
	cout << '\n';
	s = slovo(s);
	for (int i = s.length(); i >= 0; i--) {
		cout << s[i];
	}

}*/

/*
int main() { //26 обр текст файла
	srand(time(NULL));//начальное значение для рандома
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");


	ofstream fin("text.txt");
	cout << "Введите кол-во строк в файле \n";
	int n, choose;
	while (!(cin >> n) || n < 1) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Некорректное значение\n";
	}

	string f;
	vector <string> file;
	cin.ignore(32767, '\n');//для нормальной работы getline
	for (int i = 0; i < n; i++) {

		cout << "Введите " << i + 1 << " строку" << endl;
		getline(cin, f);
		fin << f << endl;
		file.push_back(f);

	}
	fin.close();//записали файл и забили вектор этими же строками

	cout << "Заменить все символы в файле на случайные - 1\n"
		"Заменить выбранный элемент на случайный/введённый с клавиатуры/ - 2\n"
		"Посимвольная замена файлов на случайный/введённый с клавиатуры - 3\n";
	while (!(cin >> choose) || choose != 1 && choose != 2 && choose != 3) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Некорректное значение\n";
	}

	switch (choose) {
		//в первом кейсе ничего сложного, просто меняем каждый элемент на рандомный (менять будем везде в векторе и потом записывать в файл)
	case 1: {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < file[i].length(); j++) {
				file[i][j] = char(rand() % 250);
			}

		}
		break;
	}

		  // во втором кейсе куча проверок
	case 2: {
		int i, j, choose2, stop = 1;
		char symbol;
		//весь этот прикол у нас в вайле,чтобы не выкидывало из кейса после изменения одного символа
		while (stop != 0) {


			cout << "Введите номер строки\n";
			while (!(cin >> i) || i <= 0 || i > n) {
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Некорректное значение\n";
			}
			cout << "Введите номер элемента в строке\n";
			while (!(cin >> j) || j <= 0 || j > file[i - 1].length()) {
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Некорректное значение\n";
			}


			//здесь делаем развилку для случайного ввода/пользовательского
			cout << "Замена на случайный символ - 1\nНа введённый с клавиатуры - 2\n";
			while (!(cin >> choose2) || choose2 != 1 && choose2 != 2) {
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Некорректное значение\n";
			}
			if (choose2 == 1) {
				file[i - 1][j - 1] = rand() % 250;
			}
			else {
				cout << "Введите символ\n";
				while (!(cin >> symbol)) {
					cin.clear();
					cin.ignore(32767, '\n');
					cout << "Некорректное значение\n";
				}
				file[i - 1][j - 1] = symbol;

			}

			cout << "Для продолжения такой замены введите 1, для выхода нажмите 0\n";
			while (!(cin >> stop) || stop != 0 && stop != 1) {
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Некорректное значение\n";
			}
		}
		break;
	}

		  //в 3-м кейсе мы бежим по всем элементам по порядку и делаем развилку,как во втором кейсе
	case 3: {
		int choose2;
		char symbol;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < file[i].length(); j++) {
				cout << "Замена на случайный символ - 1\nНа введённый с клавиатуры - 2\n";
				cout << "Замена элемента в строке " << i + 1 << " с индексом " << j << endl;
				while (!(cin >> choose2) || choose2 != 1 && choose2 != 2) {
					cin.clear();
					cin.ignore(32767, '\n');
					cout << "Некорректное значение\n";
				}



				if (choose2 == 1) {
					file[i][j] = rand() % 250;
				}

				else {
					cout << "Введите символ\n";
					while (!(cin >> symbol)) {
						cin.clear();
						cin.ignore(32767, '\n');
						cout << "Некорректное значение\n";
					}
					file[i][j] = symbol;
				}
			}
		}
	}
	}
	//выводми результат до действий
	cout << "Файл до замены\n";
	ifstream fin1("text.txt");
	string temp;
	for (int i = 0; i < n; i++) {
		getline(fin1, temp);
		cout << temp << endl;
	}
	fin1.close();



	//записываем результат в файл
	ofstream fin2("text.txt");
	for (int i = 0; i < n; i++) {
		fin2 << file[i] << endl;
	}
	fin2.close();

	//выводми результат после действий
	cout << "Файл после замены\n";
	ifstream fin3("text.txt");
	for (int i = 0; i < n; i++) {
		getline(fin3, temp);
		cout << temp << endl;
	}
	fin3.close();

}*/


/*
int main() {

	//42 с массивами (ряды)
	setlocale(0, "");
	vector<string> first;
	vector<string> second;
	int n;
	cout << "Введите кол-во символов: ";
	while (!(cin >> n) || n <= 0) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Неккоректный ввод:\n";
	}
	string j;
	for (int i = 0; i < n; i++) {
		while (!(cin >> j)) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Неккоректный ввод:\n";
		}
		first.push_back(j);

	}

	string temp;
	map <string, string> rez;

	for (int i = 0; i < n - 1; i++) {
		temp = "";
		for (int j = i + 1; j < n; j++) {
			if (first[i] == first[j]) {
				temp += to_string(j);


			}
		}
		if (!temp.empty()) {
			temp += to_string(i);
			sort(temp.begin(), temp.end());
			if (rez[first[i]].empty()) {
				rez[first[i]] = temp;
				second.push_back(first[i]);
			}

		}
	}

	int all = 0;

	cout << "Индексы повторяющихся символов: \n";
	auto it = rez.begin();
	for (int i = 0; it != rez.end(); it++, i++) {  // выводим их
		cout << i << ") Элемент " << it->first << ", индексы ";
		int u = 0;
		for (auto k : it->second) {
			cout << k - 48 << " ";
			u++;
			all++;

		}
		cout << "Кол-во = " << u << endl;
	}


	sort(second.begin(), second.end());

	cout << "\nКол-во одинаковых символов(всех): " << all << endl;


	cout << "\nОтсортированные символы в другом массиве: ";
	for (auto k : second)cout << k << " ";

}*/

/*
int min(vector <int> j) { //5 файл
	int min = j[0];
	int min_n = 0;
	for (int i = 0; i < j.size(); i++) {

		if (j[i] < min) {
			min = j[i];
			min_n = i;
		}


	}
	return min_n;
}
int main() {
	int m, n;
	int temp;
	setlocale(0, "");

	srand(time(NULL));//задаём начальное значение для рандома с помощью time
	//заполнение матриц в файле
	ofstream fin("text2.txt");

	cout << "Введите кол-во строк: ";
	while (!(cin >> m) || m <= 0) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Некорректный ввод: ";
	}
	cout << "\nВведите кол-во столбцов: ";
	while (!(cin >> n) || n <= 0) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Некорректный ввод: ";
	}

	vector <int>* matrici = new vector <int>[m * 5];//массив векторов
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				temp = rand();
				fin << temp << " ";//для каждого элемента генерируем рандомное значение
				matrici[i * m + j].push_back(temp);

			}
			fin << "\n";
		}
	}
	fin.close();

	//выводим содержимое файла
	string c;
	ifstream fin1("text2.txt");
	for (int i = 0; i < m * 5; i++) {
		if (i % m == 0) {
			cout << endl;
		}
		c = "";
		getline(fin1, c);
		cout << c << endl;

	}
	fin1.close();



	int min_m = 0;
	int min_n = 0;

	int max = 0;
	int max_m;

	string rez[5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < m; j++) {
			min_m = j;
			min_n = min(matrici[i * m + j]);
			max = 0;
			max_m = 0;
			for (int k = 0; k < n; k++) {
				if (matrici[i * m + k][min_n] > max) {
					max = matrici[i * m + k][min_n];
					max_m = k;
				}
			}
			if (max_m == min_m) {
				rez[i] = to_string(min_m + 1) + to_string(min_n + 1);

			}
		}

	}
	delete[] matrici;
	// выводим результат
	for (int i = 0; i < 5; i++) {
		if (rez[i].empty()) {
			cout << "Для матрицы под номером " << i + 1 << " нет такого элемента\n";
		}
		else {
			cout << "Для матрицы под номером " << i + 1 << " элемент (" << rez[i][0] << ", " << rez[i][1] << ")\n";
		}
	}

}*/

/*
bool isnotalpha(char c) { // 26 файл
	return  int(c) <= 64 + (int(c) >= 91 * int(c) < 96) + (int(c) >= 123 * int(c) <= 127) + (int(c) >= 176 * int(c) <= 223) + int(c) >= 242;

}//функция, которая возвращает true, если это не буква
bool fiocheck(string j) {
	int k = 0;
	bool slova = 0;
	bool num = 1;
	for (auto h : j) {
		if (h == ' ') {
			k++;
		}
		if (k == 2) {
			slova = 1;
		}
		if (k > 2) {
			slova = 0;
		}
	}
	for (auto c : j) {
		if (isnotalpha(c) && c != 0) {
			num = 0;
		}
	}
	return num * slova;

}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");

	int n;
	cout << "Введите кол-во студентов\n";
	while (!(cin >> n) || !(n >= 1)) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Некоректное значение\n";
	}

	int zachet;
	string name_student, name, temp, temp1, marks;
	vector <string> strochki;//здесь будем хранить строчками информацию про студентов
	ofstream fin1("students.txt");

	for (int i = 0; i < n; i++) {
		//в следующей части кода, формируем строку, которую в последствии запишем в файл и в вектор
		marks = "";
		cout << "Введите номер зачётной книжки\n";
		while (!(cin >> zachet) || !(zachet >= 1)) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Некоректное значение\n";
		}

		cout << "Введите ФИО студента\n";
		cin.ignore(32767, '\n');//нужно чтобы почистить поток cin, для ниженаписанной функции !(getline(cin, name_student), если этого не сделать,то он будет забирать сначала прошлые символы
		while (!(getline(cin, name_student)) || !(fiocheck(name_student))) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Некоректное значение\n";
		}

		for (int i = 0; i < 5; i++) {
			cout << "Введите оценку у студента " << name_student << " за " << i + 1 << " предмет: ";
			while (!(cin >> temp1) || !(temp1[0] >= '1' && temp1[0] <= '5') || temp1.length() != 1) {
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Некоректное значение\n";
			}
			marks += temp1;

		}

		temp = to_string(zachet) + "|" + name_student + "|" + marks;//та самая строка
		fin1 << temp << endl;
		strochki.push_back(temp);
	}
	fin1.close();

	//выводим содержимое файла
	ifstream fin2("students.txt");
	string f;
	cout << "Файл до сортировки\n";
	for (int i = 0; i < n; i++) {
		getline(fin2, f);
		cout << f << endl;
	}
	fin2.close();

	sort(strochki.begin(), strochki.end(), [](const string a, const string b) {
		int k1 = 0, k2 = 0;
		for (int i = a.length() - 1; i >= a.length() - 5; i--) {
			k1 += a[i];
			k2 += b[i];
		}
		return k1 > k2;
		});

	//записываем изменения в файл, если создать переменную ofstream без тега(не помню какого) то файл сам почиститься
	ofstream fin3("students.txt");
	for (int i = 0; i < n; i++) {
		fin3 << strochki[i] << endl;
	}
	fin3.close();

	//выводим изменения
	ifstream fin4("students.txt");
	cout << "Файл после сортировки\n";
	for (int i = 0; i < n; i++) {
		getline(fin4, f);
		cout << f << endl;
	}
	fin4.close();

}
*/

/*
int Inputint(int m, int M) {
	for (;;) {
		float valuea;
		cout << "Введите число:\n";
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

int F(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else if (n >= 3) {
		return F(n - 1) + F(n - 2);
	}
}

int main() //структурные числа
{
	setlocale(LC_ALL, "ru");
	int N = 0;
	N = Inputint(1, 2147483647);
	cout << F(N);
	return 0;
}
*/



