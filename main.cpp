#include <iostream>

using namespace std;

void zadanie4() {
	int rok;
	cout << "rok?\n";
	cin >> rok;
	switch (rok) {
		case 2011:
			cout << "rok nie jest przestepny";
			break;
		case 2012:
			cout << "rok jest przestepny";

			break;
		case 2013:
			cout << "rok nie jest przestepny";
			break;
		case 2014:
			cout << "rok nie jest przestepny";
			break;
		case 2015:
			cout << "rok nie jest przestepny";
			break;
		case 2016:
			cout << "rok jest przestepny";
			break;
		case 2017:
			cout << "rok nie jest przestepny";
			break;
		case 2018:
			cout << "rok nie jest przestepny";
			break;
		case 2019:
			cout << "rok nie jest przestepny";
			break;
		default:
			cout << "rok nie istnieje";
			break;
	}
}

void zadanie5() {
	int miejsce;
	cout << "miejsce?\n";
	cin >> miejsce;
	switch (miejsce) {
	case 1:
		cout << "gratulacje koszulka ";
	case 2:
		cout << "shaker ";
	case 3:
		cout << "kreatyna";
		break;
	default:
		cout << "nie kontaktuj sie ze mna poki nic nie wygrasz";
		break;
	}
}

void zadanie6_1() {
	char znak;
	cout << "witamy w kalkulatorze" << endl;
	cout << "niestety budzet nie pozwolil na dowolnosc liczb" << endl;
	cout << "ALE! mozna wybrac dzialanie:" << endl;
	cout << "+ => dodawanie" << endl;
	cout << "- => odejmowanie" << endl;
	cout << "* => mnozenie" << endl;
	cout << "/ => dzielenie" << endl;
	cout << "torturom... znaczy dzialaniu zostana poddane cyfry 4 oraz 2." << endl;
	cout << "podaj znak: ";
	cin >> znak;
	switch (znak) {
	case '+':
		cout << "4 + 2 = " << 4 + 2;
		break;
	case '-':
		cout << "4 - 2 = " << 4 - 2;
		break;
	case '*':
		cout << "4 * 2 = " << 4 * 2;
		break;
	case '/':
		cout << "4 / 2 = " << 4 / 2;
		break;
	default:
		cout << "zabiles niskobudzetowy kalkulator, gratuluje, jestes z siebie dumny? naprawde? o to ci w zyciu chodzilo? \numarl na smierc i nie zyje, mial zone i dzieci a teraz nawet sie z nimi nie pozegna.";
		break;
	}
}


void zadanie6_2() {
		char znak2;
		int liczba1;
		int liczba2;
		cout << "witamy w kalkulatorze" << endl;
		cout << "na szczescie budzet pozwolil na dowolnosc liczb dzieki naszym inwestorom" << endl;
		cout << "TOMASZ WZGORZEPALEC | CZERWONYBYK | ORBITA" << endl;
		cout << "prosze wybrac znak z ponizej podanych:" << endl;
		cout << "+ => dodawanie" << endl;
		cout << "- => odejmowanie" << endl;
		cout << "* => mnozenie" << endl;
		cout << "/ => dzielenie" << endl;
		cout << "podaj znak: ";
		cin >> znak2;
		cout << "podaj pierwsza liczbe: ";
		cin >> liczba1;
		cout << "podaj druga liczbe: ";
		cin >> liczba2;
		switch (znak2) {
		case '+':
			cout << liczba1 + liczba2;
			break;
		case '-':
			cout << liczba1 - liczba2;
			break;
		case '*':
			cout << liczba1 * liczba2;
			break;
		case '/':
			if (liczba1 && liczba2 != 0) {
				cout << liczba1 / liczba2;
			}
			else {
				cout << "nie kolego. skonczylo sie. zabieram kalkulator zanim mu zrobisz krzywde.";
			}
			break;
		default:
			cout << "gratuluje zrobiles to drugi raz. miales jedno zadanie, a teraz wysokobudzetowy kalkulator tez nie zyje.";
			break;
		}
}





int main() {
	zadanie6_2();
}