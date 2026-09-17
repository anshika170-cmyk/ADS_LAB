#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    cout<<"Enter the no.:";
    cin >> n;

    int original = n;
    int reversed = reverseNumber(n);

    if (original == reversed)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}