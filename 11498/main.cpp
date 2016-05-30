/*
 * 11498 - Division of Nlogonia
 */

#include <iostream>

using namespace std;

int main() {

    int nTests, divX, divY, resX, resY;

    cin >> nTests;

    while (nTests != 0)  {

        cin >> divX >> divY;

        for (int i = 0; i < nTests; ++i)  {
            cin >> resX >> resY;

            if ((resX == divX) || (resY == divY))  {
                cout << "divisa";

            } else if (resX > divX)  {
                if (resY > divY)  {
                    cout << "NE";
                } else  {
                    cout << "SE";
                }

            } else  {
                if (resY > divY)  {
                    cout << "NO";
                } else  {
                    cout << "SO";
                }
            }

            cout << endl;
        }

        cin >> nTests;
    }
}