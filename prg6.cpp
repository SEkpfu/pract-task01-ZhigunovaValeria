//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    string surname1, surname2;
//    double hours1, rate1, hours2, rate2, bonus1,bonus2;
//
//    cout << "������� ������� ��������� (������� �������� 20 ��������), ���������� ������������� �����, ��������� ������ � % ������" << endl;
//    cin >> surname1 >> hours1 >> rate1>>bonus1;
//    cout << "������� ������� ��������� (������� �������� 20 ��������), ���������� ������������� �����, ��������� ������ � % ������" << endl;
//    cin >> surname2 >> hours2 >> rate2>>bonus2;
//
//  
//    double salary1 = hours1 * rate1 * (1 + bonus1 / 100);
//    double salary2 = hours2 * rate2 * (1 + bonus2 / 100);
//
//    double tax1 = salary1 * 0.87;
//    double tax2 = salary2 * 0.87;
//
//    if (tax1 < 1000) {
//        cout << "��������:" << surname1 << " ������� �� ���� ������ 1000�." << endl;
//    }
//    if (tax2 < 1000) {
//        cout << "��������:" << surname2 << " ������� �� ���� ������ 1000�." << endl;
//    }
//
//    if (tax1 > 50) {
//        cout << "��������:" << surname1[0] << "-" << surname1[surname1.length() - 1] << " �������� ����� ����� 50�" << endl;
//    }
//    if (tax2 > 50) {
//        cout << "��������:" << surname2[0] << "-" << surname2[surname2.length() - 1] << " �������� ����� ����� 50�" << endl;
//    }
//
//    return 0;
//}
