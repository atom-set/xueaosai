#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c, temp;
    cin >> a >> b >> c;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}