
#pragma once

#include <iostream>
//inline 修饰符，内联函数，main方法一般推荐使用加快调用函数速度。10行以内的方法编译时会直接写到main中。
int main() {
    
    int i=1;
    // 输出 "Hello, World!"
    std::cout << "Hello, C++Primer " << '\n';
    std::cout << "The student Day is: " << i <<  '\n';
    return 0;
}
