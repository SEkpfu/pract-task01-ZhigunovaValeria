//#include <iostream>
//using namespace std;
//
//double total(double hour, double rate, double prize){
//	return hour * rate * (1 + prize / 100);
//}
//double ndfl(double clean) {
//	return clean * 0.13;
//}
//
//int main() {
//	setlocale(LC_ALL, "RU");
//
//	double hour, rate, prize;
//
//	cout << "¬ведите количество отработанных работником часов: ";
//	cin >> hour;
//	cout << "¬ведите ставку почасовой оплаты работника: ";
//	cin >> rate;
//	cout << "¬ведите % премии: ";
//	cin >> prize;
//
//	double clean = total(hour, rate, prize);
//	cout << "ќбща€ заработанна€ работником сумма:";
//	cout << clean-ndfl(clean) << endl;
//	return 0;
//}