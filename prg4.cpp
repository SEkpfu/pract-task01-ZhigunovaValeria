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
//	cout << "������� ���������� ������������ ���������� �����: ";
//	cin >> hour;
//	cout << "������� ������ ��������� ������ ���������: ";
//	cin >> rate;
//	cout << "������� % ������: ";
//	cin >> prize;
//
//	double clean = total(hour, rate, prize);
//	cout << "����� ������������ ���������� �����: ";
//	cout << clean << endl;
//	cout << "����� ����������� ������: ";
//	cout << ndfl(clean) << endl;
//	cout << "�����, ���������� ���������� �� ���� (�� ������� ������): ";
//	cout << nets(clean) << endl;
//	return 0;
//}