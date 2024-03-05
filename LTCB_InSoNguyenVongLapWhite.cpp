#include <iostream>
using namespace std;

int main() {
    int n, i = 2;
    cout << "Nhap so nguyen duong n: "; cin >> n;
    cout << "Cac so nguyen to tu 0 den " << n << " la:\n";

    while (i <= n) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j)
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        if (isPrime) cout << i << " ";
        ++i;
    }

    return 0;
}
