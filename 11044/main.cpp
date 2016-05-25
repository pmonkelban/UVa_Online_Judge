/*
 * 11044 - Searching for Nessy
 */

#include <iostream>

using namespace std;

int main() {

    int num_t;
    long num_rows, num_cols;

    cin >> num_t;

    while (num_t--) {
        cin >> num_rows >> num_cols;

        long result = (num_rows / 3) * (num_cols / 3);
        cout << result << endl;
    }
}



