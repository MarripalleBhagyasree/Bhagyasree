#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
 
       if (S == P) {
       return "PALINDROME";
    }
    else {
        return "NOT PALINDROME";
    }
}

int main()
{
    string S = "ABCCBA";
    cout << isPalindrome(S);
 
    return 0;
}



