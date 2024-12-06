#include <iostream>
using namespace std;

int reverseInteger(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int reversedNum = reverseInteger(num);
    cout << "Reversed integer: " << reversedNum << endl;
    return 0;
}
