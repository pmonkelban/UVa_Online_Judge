/*
 * 11956 - Brainfuck
 */

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

const int MEM_SIZE = 100;
const int MAX_VALUE = 255;

string int_to_hex(int i)  {
    stringstream stream;
    stream << setfill('0') << setw(2) << hex << uppercase << i;
    return stream.str();
}

int main() {

    int num_t;
    int t = 1;
    string s;

    cin >> num_t;

    while (num_t--) {

        int mem[MEM_SIZE] = {};
        int mem_ptr = 0;

        cin >> s;

        for (int x = 0; x < s.length(); ++x)  {
            if (s.at(x) == '>')  {
                mem_ptr = (mem_ptr + 1) % MEM_SIZE;
            } else if (s.at(x) == '<') {
                --mem_ptr;
                if (mem_ptr == -1) mem_ptr = MEM_SIZE - 1;
            } else if (s.at(x) == '+')  {
                if (mem[mem_ptr] == MAX_VALUE) mem[mem_ptr] = 0;
                else mem[mem_ptr] += 1;
            } else if (s.at(x) == '-')  {
                if (mem[mem_ptr] == 0) mem[mem_ptr] = MAX_VALUE;
                else  mem[mem_ptr] -= 1;
            } else if (s.at(x) == '.')  {
                // Output the value of the byte at the pointer.
            }

        }

        cout << "Case " << t++ << ":";

        for (int x = 0; x < MEM_SIZE; ++x)  {
            cout << " " << int_to_hex(mem[x]);
        }

        cout << endl;

    }
    return 0;
}