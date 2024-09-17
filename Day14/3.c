//Write functions to perform the following bitwise operations:
//Set, clear, and toggle specific bits.
//Check if a bit is set.
//Count the number of set bits.
//Reverse the bits of a number.
//Swap the nibbles of a number.
//Bitwise optimization:

#include<stdio.h>

void setbit(unsigned int *a,unsigned int value) {
	*a = *a | (1 << value);
}

void clearbit(unsigned int *a, unsigned int value) {
	*a = *a & ~(1 << value);
}

void togglebit(unsigned int *a, unsigned int value) {
	*a = *a ^ (1 << value);
}

void checksetbit(unsigned int *a, unsigned int value) {
	if ((*a & (1 << value)) != 0) {
		printf("Bit is set\n");
	}
	else {
		printf("Bit is not set\n");
	}
}

unsigned int reversebits(unsigned int a) {
	unsigned int reverse = 0;
	int size = sizeof(a) * 8;
	for (int i = 0; i < size; i++) {
		reverse <<= 1;
          	reverse |= (a & 1);
        	a >>= 1;
	}
	return reverse;
}

int main() {
	unsigned int *a = 171;
	setbit(&a,7);
	printf("After setting bit as 7: %u\n",a);
	
	clearbit(&a,0);
	printf("After clearing bit: %u\n",a);
	
	togglebit(&a,4);
	printf("After toggling bit: %u\n",a);

	checksetbit(&a,7);

	int count = countsetbits(a);
	printf("Total set bits in a: %d\n",count);

	unsigned int reverse = reversebits(a);
	printf("reversed bits : %u\n",reverse);

}





