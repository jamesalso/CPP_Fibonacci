#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    int n;

    std::cout << "Nhap vao so N: ";
    std::cin >> n;

    std::cout << "Day Fibonacci thu " << n << " la: " << fibo(n) << std::endl;

    return 0;
}
