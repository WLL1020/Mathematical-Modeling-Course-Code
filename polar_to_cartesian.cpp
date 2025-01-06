#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include "conversion.h"

// �������� (��, ��) ת��Ϊֱ������ (x, y)
void polarToCartesian(double r, double theta, double& x, double& y) {
    x = r * cos(theta);              // ���� x ����
    y = r * sin(theta);              // ���� y ����
}
