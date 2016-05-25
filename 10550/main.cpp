/*
 * 10550 - Combination Lock
 */

#include <iostream>
#include <cstdio>

using namespace std;

const int deg_per_num = 9;  // 360 degrees / 40 numbers = 9 deg / number
const int num_per_lock = 40;
const int min_degrees = 1080;  // 2 full turns at the start and 1 later on.

int turn_to(int start, int end, bool isCW)  {

    /*
     * The problem statement is unclear about what to do if consecutive
     * numbers are the same.  "Continue turning..." and "Turn the dial..."
     * could imply that you should turn until you come back to the number.
     * i.e. a full 360 degrees.
     * But the correct answer wants no turn if start == end.
     */
    if (start == end) return 0;

    if (isCW)  {
        if (end < start)  return deg_per_num * (start - end);
        else return deg_per_num * (num_per_lock - (end - start));
    }  else {
        if (end > start) return deg_per_num * (end - start);
        else return deg_per_num * (num_per_lock - (start - end));
    }

}

int main() {

    int start, num1, num2, num3;
    int result;

    while (scanf("%d %d %d %d", &start, &num1, &num2, &num3) == 4)  {

        if ((start == 0) && (num1 == 0) && (num2 == 0) && (num3 == 0)) return 0;

        result = min_degrees;

        // Stop at the first number of the combination
        result += turn_to(start, num1, true);

        // Continue turning CCW until the 2nd number is reached
        result += turn_to(num1, num2, false);

        // Turn the dial CW until the 3rn number is reached
        result += turn_to(num2, num3, true);

        cout << result << endl;

    }

    return 0;
}