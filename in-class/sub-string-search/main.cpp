/**
 *
 *  WARNING: This a terrible bit of code, but it was the best I could do to force the problem using 2 for loops
 *  and the amount of c++ I knew at the time.
 *
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    char sub[6] = {'s', 't', 'r', 'i', 'n', 'g'};
    char str[10] = {'s', 's', 't', 's', 't', 'r', 'i', 'n', 'g', 's'};
    char output[10];
    int count = 0;

    for(int i = 0; i < 6; i++) {

        for(int j = 0; j < 10; j++) {


            if (sub[i] == str[j]) {
                output[i] = str[j];
                i++;
            } else {
                if (i != sizeof(sub)) {
                    output[i - 1] = 0;
                    i = 0;
                    j = 0 + count;
                    count++;
                }
            }
        }
    }



    for(int n = 0; n < sizeof(output); n++) {
        cout << " [" << output[n] << "] ";
    }

    return 0;
}
