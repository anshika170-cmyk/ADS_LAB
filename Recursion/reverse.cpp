#include <iostream>
using namespace std;

int reverseNum(int n, int rev) {
    // Base case
    if (n == 0)
        return rev;

    // Add last digit to reversed number
    rev = rev * 10 + (n % 10);

    // Recursive call
    return reverseNum(n / 10, rev);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Reverse = " << reverseNum(n, 0);

    return 0;
}