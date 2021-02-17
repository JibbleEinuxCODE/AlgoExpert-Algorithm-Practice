#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string Str)
{
    int leftIndex = 0;
    int rightIndex = Str.length() - 1;
    while (leftIndex < rightIndex)
    {
        if (Str[leftIndex] != Str[rightIndex])
            return false;
        leftIndex++;
        rightIndex--;
    }
    return true;
}

int main()
{
    string Str;
    cin >> Str;
    if (isPalindrome(Str))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}