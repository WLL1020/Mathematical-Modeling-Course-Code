#pragma once
#ifndef CONVERSION_H
#define CONVERSION_H

// 将直角坐标 (x, y) 转换为极坐标 (ρ, θ)
void cartesianToPolar(double x, double y, double& r, double& theta);

// 将极坐标 (ρ, θ) 转换为直角坐标 (x, y)
void polarToCartesian(double r, double theta, double& x, double& y);

#endif // CONVERSION_H
