#include <stdio.h>

void modifyValue(int *x) {
    *x = *x * 2;
}

int main() {
    int num = 5;
    modifyValue(&num); // Pass the address of 'num'
    printf("Value of num after function call: %d\n",num);
    return 0;
}
