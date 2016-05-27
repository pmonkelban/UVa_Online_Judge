/*
 * 11172 - Relational Operator
 */

#include <iostream>

using namespace std;

int main() {

    int num_t, num_1, num_2;

    cin >> num_t;

    while (num_t--)  {
        cin >> num_1 >> num_2;

        if (num_1 == num_2)  cout << "=";
        else if (num_1 > num_2)  cout << ">";
        else cout << "<";

        cout << endl;
    }

    return 0;
}