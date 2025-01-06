#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include "conversion.h"

// ��ֱ������ (x, y) ת��Ϊ������ (��, ��)
void cartesianToPolar(double x, double y, double& r, double& theta) {
    r = sqrt(x * x + y * y);          // ���㼫�� ��
    theta = atan2(y, x);             // ���㼫�� �� (atan2 ����������Ϣ)
}
