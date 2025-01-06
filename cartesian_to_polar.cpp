#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include "conversion.h"

// 将直角坐标 (x, y) 转换为极坐标 (ρ, θ)
void cartesianToPolar(double x, double y, double& r, double& theta) {
    r = sqrt(x * x + y * y);          // 计算极径 ρ
    theta = atan2(y, x);             // 计算极角 θ (atan2 处理象限信息)
}
