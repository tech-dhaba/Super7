//Bitwise Swapping:
//1. Without using a temporary variable, swap the values of two integer variables using only bitwise operators.

#include<stdio.h>

void swap(int *a, int *b) {
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}

int main() {
	int a = 10;
	int b = 20;
	printf("before swap: %d %d\n",a,b);
	swap(&a,&b);
	printf("After swap: %d %d\n",a,b);
	return 0;
}

//2. Counting Set Bits:
//Write a function to count the number of set bits in an integer.

#include<stdio.h>

int countsetbits(unsigned int n) {
	int count = 0;
    	while (n > 0) {
        	count = count + (n & 1); 
        	n = n >> 1;
	}
return count;
}

int main() {
	unsigned int n = 120;
	int count = countsetbits(n);
	printf("No of set bits: %d\n",count);
}

//3. Reversing Bits:
//Reverse the order of bits in an integer.

#include<stdio.h>

int reversebits(unsigned int a) {
        int reverse = 0;
        int size = sizeof(a) * 8;
        for (int i = 0; i < size; i++) {
                reverse <<= 1;
                reverse |= (a & 1);
                a >>= 1;
        }
        return reverse;
}

int main() {
	unsigned int a = 120;
	printf("Before reverse bits are: %u\n",a);
	int reverse = reversebits(a);
	printf("After reverse bits are: %d\n",reverse);
}





