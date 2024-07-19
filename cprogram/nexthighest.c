#include <stdio.h>
int countSetBits(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);
        count++;
    }
    return count;
}
int nextHigherWithSameSetBits(int num) {
    if (num <= 0)
        return -1; 
    int originalSetBits = countSetBits(num);
    int nextNumber = num + 1;
    while (countSetBits(nextNumber) != originalSetBits) {
        nextNumber++;
    }
    return nextNumber;
}

int main() {
    int num = 23; 
    int nextHigher = nextHigherWithSameSetBits(num);
    printf("Next higher number with the same number of set bits as %d is: %d\n", num, nextHigher);
    return 0;
}

