//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// �ж�һ�����Ƿ�Ϊ�����ĺ���
//bool isPrime(int num) {
//    if (num <= 1) return false; // 1�����µ�����������
//    for (int i = 2; i <= sqrt(num); i++) {
//        if (num % i == 0) {
//            return false; // �����������˵����������
//        }
//    }
//    return true; // ������
//}
//
//int main() {
//    // ����[100, 1000]�����ÿһ����
//    cout << "������Χ: [100, 1000]" << endl;
//    for (int i = 100; i <= 1000; i++) {
//        if (isPrime(i)) {
//            cout << i << " "; // �������
//        }
//    }
//    cout << endl;
//    return 0;
//}


#include <iostream>
#include <cmath>
#include "conversion.h"

using namespace std;

int main() {
    int choice;
    cout << "��ѡ��ת�����ͣ�" << endl;
    cout << "1. ֱ������ (x, y) תΪ������ (��, ��)" << endl;
    cout << "2. ������ (��, ��) תΪֱ������ (x, y)" << endl;
    cout << "����ѡ�� (1 �� 2)��";
    cin >> choice;

    if (choice == 1) {
        double x, y, r, theta;
        cout << "����ֱ������ x �� y��" << endl;
        cin >> x >> y;

        cartesianToPolar(x, y, r, theta);

        cout << "������Ϊ��" << endl;
        cout << "�� = " << r << ", �� = " << theta << " (����)" << endl;
    }
    else if (choice == 2) {
        double r, theta, x, y;
        cout << "���뼫���� �� �� �� (����)��" << endl;
        cin >> r >> theta;

        polarToCartesian(r, theta, x, y);

        cout << "ֱ������Ϊ��" << endl;
        cout << "x = " << x << ", y = " << y << endl;
    }
    else {
        cout << "��Чѡ�" << endl;
    }

    return 0;
}
