#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

// Function to check if a string is a palindrome or not
int check(string str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

string Palindrome(string str)  // This Function finds the longest substring and check for palindrome
{
    string palindrome;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j <= str.length(); j++)
        {
            string substring = str.substr(i, j - i);
            palindrome = check(substring) && substring.length() > palindrome.length() ? substring : palindrome;
        }
    }
    return palindrome;
}

int main()
{
    string line;

    cout << "Enter the string:"<<endl;
    getline(cin,line);
  
    string longpalindrome = Palindrome(line);
  
    cout<<"Longest palindrome:"<<endl;
    if(longpalindrome.length() >= 1)
    {
        cout << longpalindrome << endl;
    }

    return 0;
}
