using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, A, C;
	cout << "Введите год: ";
	cin >> N;
	if (N > 1983) {
		N = (N - 1984) % 60 + 1;
	}
	else {
		N = 61 - (1984 - N) % 60;
	};
	A = (N - 1) % 12 + 1;
	C = (N - 1) % 10 + 1;
	C = int((C - 1) / 2) + 1;
	cout << "Год ";
	switch (C) {
	case 1:
		cout << "зелено";
		break;
	case 2:
		cout << "красно";
		break;
	case 3:
		cout << "желто";
		break;
	case 4:
		cout << "бело";
		break;
	case 5:
		cout << "черно";
		break;
	};
	switch (A) {
	case 1:
		cout << "й крысы";
		break;
	case 2:
		cout << "й коровы";
		break;
	case 3:
		cout << "го тигра";
		break;
	case 4:
		cout << "го зайца";
		break;
	case 5:
		cout << "го дракона";
		break;
	case 6:
		cout << "й змеи";
		break;
	case 7:
		cout << "й лошади";
		break;
	case 8:
		cout << "й овцы";
		break;
	case 9:
		cout << "й обезьяны";
		break;
	case 10:
		cout << "й курицы";
		break;
	case 11:
		cout << "й собаки";
		break;
	case 12:
		cout << "й свиньи";
		break;
	}
}