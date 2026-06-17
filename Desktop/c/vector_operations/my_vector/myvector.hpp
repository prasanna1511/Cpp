#pragma once

#include <tuple>
#include <vector>
#include <cmath>
#include <algorithm>

struct Vector3d {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    Vector3d() = default;
    Vector3d(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}
};

Vector3d sum(const Vector3d &lhs, const Vector3d &rhs);
Vector3d scale(const Vector3d &v, double scalar);
Vector3d multiply(const Vector3d &lhs, const Vector3d &rhs);
double norm(const Vector3d &v);
Vector3d normalize(const Vector3d &v);
void setConstant(Vector3d &v, double constant);
double dotProduct(const Vector3d &v1, const Vector3d &v2);
std::tuple<double, double> minmax(const Vector3d &v);
bool isZeros(const Vector3d &v);
Vector3d minus(const Vector3d &lhs, const Vector3d &rhs);
std::vector<Vector3d> ray_sampling(const Vector3d &begin, const Vector3d &end, int num_sample);
