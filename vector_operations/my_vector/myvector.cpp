#include "myvector.hpp"

Vector3d sum(const Vector3d &lhs, const Vector3d &rhs) {
    return Vector3d(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z);
}

Vector3d scale(const Vector3d &v, double scalar) {
    return Vector3d(v.x * scalar, v.y * scalar, v.z * scalar);
}

Vector3d multiply(const Vector3d &lhs, const Vector3d &rhs) {
    return Vector3d(lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z);
}

double norm(const Vector3d &v) {
    return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

Vector3d normalize(const Vector3d &v) {
    double n = norm(v);
    if (n == 0.0) return v;
    return scale(v, 1.0 / n);
}

void setConstant(Vector3d &v, double constant) {
    v.x = constant;
    v.y = constant;
    v.z = constant;
}

double dotProduct(const Vector3d &v1, const Vector3d &v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

std::tuple<double, double> minmax(const Vector3d &v) {
    double minVal = std::min({v.x, v.y, v.z});
    double maxVal = std::max({v.x, v.y, v.z});
    return {minVal, maxVal};
}

bool isZeros(const Vector3d &v) {
    return v.x == 0.0 && v.y == 0.0 && v.z == 0.0;
}

Vector3d minus(const Vector3d &lhs, const Vector3d &rhs) {
    return Vector3d(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z);
}

