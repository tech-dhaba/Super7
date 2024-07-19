#include <stdio.h>
int rangeBitwiseAnd(int start, int end) {
    int result = start; 
    for (int i = start + 1; i <= end; ++i) {
        result &= i; 
        if (result == 0) {
            break;
        }
    }
    return result;
}
int main() {
    int start = 5;
    int end = 7;
    int bitwiseAnd = rangeBitwiseAnd(start, end);
    printf("Bitwise AND of numbers from %d to %d is: %d\n", start, end, bitwiseAnd);
    return 0;
}

