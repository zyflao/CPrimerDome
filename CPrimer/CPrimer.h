
#pragma once

#include <iostream>
/*
// 声明内联函数
inline void add(int a, int b) {
    int result = a + b;
    // ... 使用result的代码 ...
}

// 调用内联函数
int x = 5, y = 10;
add(x, y);

// 编译后的代码（简化表示）
int x = 5, y = 10;
int result = x + y;  // 内联函数的代码被直接复制到这里
// ... 使用result的代码 ...
总结来说，内联函数的编译运算过程涉及直接将函数体代码替换到调用点，并处理局部变量和参数，这个过程避免了函数调用的开销，但是仍然可能使用栈来存储局部变量。
*/
inline int main() {
    
    int i=1;
    // 输出 "Hello, World!"
    std::cout << "Hello, C++Primer " << '\n';
    std::cout << "The student Day is: " << i <<  '\n';
    return 0;
}
