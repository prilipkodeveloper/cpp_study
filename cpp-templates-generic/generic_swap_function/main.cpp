#include <iostream>

// 1. Function Template Definition
template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Testing with int
    int x = 10, y = 20;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    mySwap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    // Testing with float
    float f1 = 5.5f, f2 = 1.1f;
    std::cout << "Before swap: f1 = " << f1 << ", f2 = " << f2 << std::endl;
    mySwap(f1, f2);
    std::cout << "After swap: f1 = " << f1 << ", f2 = " << f2 << std::endl;

    return 0;
}