/*
 * 11364 - Optimal Parking
 */

#include <iostream>

using namespace std;

int main() {

    int num_t, num_n, n, lo, hi, x;

    cin >> num_t;

    while (num_t--)  {
        hi = -1;
        lo = 100;

        cin >> num_n;
        n = 0;

        while(n++ < num_n)  {
            cin >> x;
            if (x > hi) hi = x;
            if (x < lo) lo = x;
        }


        if (num_n < 2)  {
            cout << "0" << endl;
        } else  {
            cout << (hi - lo) * 2 << endl;
        }

    }

    return 0;
}