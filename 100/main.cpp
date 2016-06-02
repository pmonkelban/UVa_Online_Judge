#include <iostream>

/*
 * 100 - The 3n + 1 problem
 */

using namespace std;

int main()
{
    int i;
    int j;

    while ((cin >> i) && (cin >> j))  {

        int lo, hi;

        if (i <= j)  {
            lo = i;
            hi = j;
        } else  {
            lo = j;
            hi = i;
        }

        int max = 0;

        for (int x = lo; x <= hi; ++x)  {

            int cycle_length = 1;
            long long n = x;

            while (n != 1)  {
                if (n % 2 == 0) n /= 2;
                else n = (3 * n) + 1;
                cycle_length++;
            }

            if (cycle_length > max) max = cycle_length;
        }

        cout << i << " " << j << " " << max << endl;

    }

    return 0;
}
