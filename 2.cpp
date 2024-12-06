#include <iostream>
using namespace std;

void findLargest(int a, int b, int c) {
    if (a == b && b == c) {
        cout << "All numbers are equal!" << endl;
    } else if (a >= b && a >= c) {
        if (a == b || a == c) {
            cout << "Two numbers are equally the largest!" << endl;
        } else {
            cout << "The largest number is " << a << endl;
        }
    } else if (b >= a && b >= c) {
        if (b == a || b == c) {
            cout << "Two numbers are equally the largest!" << endl;
        } else {
            cout << "The largest number is " << b << endl;
        }
    } else {
        if (c == a || c == b) {
            cout << "Two numbers are equally the largest!" << endl;
        } else {
            cout << "The largest number is " << c << endl;
        }
    }
}

int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    findLargest(num1, num2, num3);
    return 0;
}
