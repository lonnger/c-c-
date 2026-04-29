#include <iostream>
#include "c_code.h"

int main() {
    std::cout << "Hello, Embedded C++!" << std::endl;
    c_function(); // 调用 C 函数
    std::cin.get(); // 等待用户按下回车键
    return 0;
}
