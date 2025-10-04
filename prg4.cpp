//#include <iostream>
//using namespace std;
//
//double total(double hour, double rate, double prize)
//{
//	return hour * rate * (1 + prize / 100);
//}
//double ndfl(double clean)
//{
//	return clean * 0.13;
//}
//double nets(double clean)
//{
//	return clean * 0.87;
//}
//
//int main() {
//	setlocale(LC_ALL, "RU");
//
//	double hour, rate, prize;
//
//	cout << "Введите количество отработанных работником часов: ";
//	cin >> hour;
//	cout << "Введите ставку почасовой оплаты работника: ";
//	cin >> rate;
//	cout << "Введите % премии: ";
//	cin >> prize;
//
//	double clean = total(hour, rate, prize);
//	cout << "Общая заработанная работником сумма: ";
//	cout << clean << endl;
//	cout << "Сумма подоходного налога: ";
//	cout << ndfl(clean) << endl;
//	cout << "Сумма, получаемая работником на руки (за вычетом налога): ";
//	cout << nets(clean) << endl;
//	return 0;
//}