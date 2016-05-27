/*
 * 353 - Pesky Palindromes
 */

#include <iostream>
#include <set>

using namespace std;

bool isPalindrome(string s)  {

    for (int x = 0; x <= s.length() / 2; ++x)  {
        if (s.at(x) != s.at(s.length() - 1 - x))  return false;
    }

    return true;

}

int main() {

    string inStr;

    while (cin >> inStr)  {

        set<string> unique_strings;

        for (int x = 0; x < inStr.length(); ++x)  {

            int remainingLength = inStr.length() - x;

            for (int y=1; y <= remainingLength; ++y)  {

                string subStr = inStr.substr(x, y);

                if (isPalindrome(subStr))  {
                    unique_strings.insert(subStr);
                }
            }
        }

        cout << "The string '" << inStr << "' contains " << unique_strings.size() << " palindromes." << endl;

    }

    return 0;
}