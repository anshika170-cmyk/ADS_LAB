#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int num, temp, digit;
    stack<int> s;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        s.push(digit);
        temp = temp / 10;
    }

    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;

        if (digit != s.top())
        {
            cout << "The number is not a palindrome.";
            return 0;
        }

        s.pop();
        temp = temp / 10;
    }

    cout << "The number is a palindrome.";

    return 0;
}
