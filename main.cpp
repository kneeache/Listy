#include <iostream>
using namespace std;


void zadanie1() {
	int liczba;
	cout << "podaj liczbe od zera do dwoch: ";
	cin >> liczba;
	switch (liczba) {
	case 0:
		cout << "lizcba to zero";
		break;
	case 1:
		cout << "liczba to jeden";
		break;
	case 2:
		cout << "liczba to dwa";
		break;
	default:
		cout << "liczba to ani jeden ani dwa ani zero, jestem toba zawiedziony";
		break;
	}
	
}

void zadanie2() {
	int miesiac;
	cout << "podaj miesiac: ";
	cin >> miesiac;
	switch (miesiac) {
	case 1:
		cout << "styczen";
		break;
	case 2:
		cout << "luty";
		break;
	case 3:
		cout << "marzec";
		break;
	case 4:
		cout << "kwiecien";
		break;
	case 5:
		cout << "maj";
		break;
	case 6:
		cout << "czerwiec";
		break;
	case 7:
		cout << "lipiec";
		break;
	case 8:
		cout << "sierpien";
		break;
	case 9:
		cout << "wrzesien";
		break;
	case 10:
		cout << "Pazdziernik!";
		break;
	case 11:
		cout << "listopad";
		break;
	case 12:
		cout << "grudzien";
		break;
	default:
		cout << "nie ma takiego miesiaca, nie pozdrawiam";
	}
}
void zadanie3() {
	char kierunek;
	cout << "podaj kierunek: ";
	cin >> kierunek;
	switch (kierunek) {
	case 'w':
		cout << "do przodu!";
		break;
	case 's':
		cout << "do tylu!";
		break;
	case 'a':
		cout << "w lewo!";
		break;
	case 'd':
		cout << "w prawo";
		break;
	default:
		cout << "eksploduj/a/a/a";
	} 
}

int main()
{
	zadanie1();
	zadanie2();
	zadanie3();
	return 0;
}