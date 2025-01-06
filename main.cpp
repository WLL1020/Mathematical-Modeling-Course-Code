//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// 判断一个数是否为素数的函数
//bool isPrime(int num) {
//    if (num <= 1) return false; // 1及以下的数不是素数
//    for (int i = 2; i <= sqrt(num); i++) {
//        if (num % i == 0) {
//            return false; // 如果能整除，说明不是素数
//        }
//    }
//    return true; // 是素数
//}
//
//int main() {
//    // 遍历[100, 1000]区间的每一个数
//    cout << "素数范围: [100, 1000]" << endl;
//    for (int i = 100; i <= 1000; i++) {
//        if (isPrime(i)) {
//            cout << i << " "; // 输出素数
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
    cout << "请选择转换类型：" << endl;
    cout << "1. 直角坐标 (x, y) 转为极坐标 (ρ, θ)" << endl;
    cout << "2. 极坐标 (ρ, θ) 转为直角坐标 (x, y)" << endl;
    cout << "输入选项 (1 或 2)：";
    cin >> choice;

    if (choice == 1) {
        double x, y, r, theta;
        cout << "输入直角坐标 x 和 y：" << endl;
        cin >> x >> y;

        cartesianToPolar(x, y, r, theta);

        cout << "极坐标为：" << endl;
        cout << "ρ = " << r << ", θ = " << theta << " (弧度)" << endl;
    }
    else if (choice == 2) {
        double r, theta, x, y;
        cout << "输入极坐标 ρ 和 θ (弧度)：" << endl;
        cin >> r >> theta;

        polarToCartesian(r, theta, x, y);

        cout << "直角坐标为：" << endl;
        cout << "x = " << x << ", y = " << y << endl;
    }
    else {
        cout << "无效选项！" << endl;
    }

    return 0;
}
