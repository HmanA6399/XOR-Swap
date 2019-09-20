#include <iostream>
using namespace std;

template <typename T>
void my_swap(T&, T&);

int main() {
    int a = 3, b = 5;
    my_swap(a, b);
    std::cout << "a=" << a << ", b=" << b;
    system("pause");
}

template <typename T>
void my_swap(T& a, T& b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}