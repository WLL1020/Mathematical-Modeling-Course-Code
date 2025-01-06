#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include "conversion.h"

// 将极坐标 (ρ, θ) 转换为直角坐标 (x, y)
void polarToCartesian(double r, double theta, double& x, double& y) {
    x = r * cos(theta);              // 计算 x 坐标
    y = r * sin(theta);              // 计算 y 坐标
}
