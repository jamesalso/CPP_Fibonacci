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

    cout << "Nhap vao so N: ";
    cin >> n;

    cout << "Day Fibonacci thu " << n << " la: " << fibo(n) << endl;

    return 0;
}
