#include "myvector.hpp"
#include <iostream>


int main() {
    Vector3d v1(1.822, 5.6783, 3.1415);
    Vector3d v2(24.045, 5.7458, 0.0);
    

    Vector3d s = sum(v1, v2);
    Vector3d p = multiply(v1, v2);
    double d = dotProduct(v1, v2);
    double n = norm(v1);
    Vector3d n_v1 = normalize(v1);
    auto [minVal, maxVal] = minmax(v1);
    auto [minVal2, maxVal2] = minmax(v2);
    bool isZero1 = isZeros(v1);
    bool isZero2 = isZeros(v2);
    
    std::cout << "Sum: " << s.x << " " << s.y << " " << s.z << std::endl;
    std::cout << "Product: " << p.x << " " << p.y << " " << p.z << std::endl;
    std::cout << "Dot Product: " << d << std::endl;
    std::cout << "Norm of v1: " << n << std::endl;
    std::cout << "Normalized v1: " << n_v1.x << " "
                << n_v1.y << " " << n_v1.z << std::endl;
    std::cout << "Min and Max of v1: " << minVal << " " << maxVal << std::endl;
    std::cout << "Min and Max of v2: " << minVal2 <<
                " " << maxVal2 << std::endl;
    std::cout << "Is v1 all zeros? " << (isZero1 ? "Yes" : "No") << std::endl;
    std::cout << "Is v2 all zeros? " << (isZero2 ? "Yes" : "No") << std::endl;  



    // Write a code snippet that computes and prints to the terminal 10 equally spaced vectors between the provided vectors
    // start_vec and end_vec
    
    Vector3d v3(1.0, 2.0, 3.0);
    Vector3d v4(4.0, 5.0, 6.0);

    for (int i = 0; i < 10; ++i) {
        double t = static_cast<double>(i) / 9.0;
        Vector3d vec = sum(scale(v3, 1.0 - t), scale(v4, t));
        std::cout << "Vector " << i + 1 << ": " << vec.x << " " << vec.y << " " << vec.z << std::endl;
    }



    return 0;
}

