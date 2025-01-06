#pragma once
#ifndef CONVERSION_H
#define CONVERSION_H

// ��ֱ������ (x, y) ת��Ϊ������ (��, ��)
void cartesianToPolar(double x, double y, double& r, double& theta);

// �������� (��, ��) ת��Ϊֱ������ (x, y)
void polarToCartesian(double r, double theta, double& x, double& y);

#endif // CONVERSION_H
