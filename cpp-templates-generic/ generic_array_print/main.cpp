#include <iostream>
#include <string>

// 1. Function Template Definition
template <typename T>
void printArray(const T arr[], int size) {
    std::cout << "[ ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    // Testing with int array
    int intArray[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Int Array: ";
    printArray(intArray, intSize);

    // Testing with double array
    double doubleArray[] = {1.1, 2.2, 3.3};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Double Array: ";
    printArray(doubleArray, doubleSize);

    // Testing with string array
    std::string stringArray[] = {"hello", "world", "template"};
    int stringSize = sizeof(stringArray) / sizeof(stringArray[0]);
    std::cout << "String Array: ";
    printArray(stringArray, stringSize);

    return 0;
}