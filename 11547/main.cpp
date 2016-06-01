/*
 * 11547 - Automatic Answer
 */

#include <iostream>

using namespace std;

int main() {

    int num_t;
    cin >> num_t;

    while (num_t--)  {
        int n;

        cin >> n;

        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;

        n /= 10;
        n %= 10;

        if (n < 0)  n *= -1;

        cout << n << endl;
    }
    return 0;
}