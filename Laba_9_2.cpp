using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	string N;
	int k;
	cout << "Введите начальное направление движенния (C, V, U, Z): ";
	cin >> N;
	cout << "Введите команду: ";
	cin >> k;
	switch (k) {
	case 1:
		if ((N == "C") || (N == "c")) {
			N = "Z";
			cout << "Направление робота - " << N;
		}
		else if ((N == "Z") || (N == "z")) {
			N = "U";
			cout << "Направление робота - " << N;
		}
		else if ((N == "U") || (N == "u")) {
			N = "V";
			cout << "Направление робота - " << N;
		}
		else if ((N == "V") || (N == "v")) {
			N = "C";
			cout << "Направление робота - " << N;
		};
		break;
	case -1:
		if ((N == "C") || (N == "c")) {
			N = "V";
			cout << "Направление робота - " << N;
		}
		else if ((N == "Z") || (N == "z")) {
			N = "C";
			cout << "Направление робота - " << N;
		}
		else if ((N == "U") || (N == "u")) {
			N = "Z";
			cout << "Направление робота - " << N;
		}
		else if ((N == "V") || (N == "v")) {
			N = "U";
			cout << "Направление робота - " << N;
		};
		break;
	case 0:
		cout << "Направление робота - " << N;
	};
}