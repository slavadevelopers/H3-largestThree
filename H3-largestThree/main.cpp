#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool condition1 = false,
         condition2 = false;
    if (a > b && a > c) {
        a = a - 5;
        condition1 = true;
    }
    if (b > a && b > c && !condition1) {
        b = b - 5;
        condition2 = true;
    }
    if (c > b && c > a && !(condition1 || condition2)) {
        c = c - 5;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
