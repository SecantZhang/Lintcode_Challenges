/* 
Description: Sum up two numbers without using arithmetic operators. 

*/

#include <iostream>

int Add (int x, int y) {
    while (y != 0) {
        int carry = x & y;
        x = x ^ y; 
        y = carry << 1;
    }

    return x;
}

int main () {
    printf("%d", Add(15, 32));
    return 0;
}