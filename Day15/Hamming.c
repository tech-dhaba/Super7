//Calculate the Hamming distance between two unsigned integers (the number of positions at which the corresponding bits differ).
//Example:
//Input: 1 (binary: 0001), 4 (binary: 0100)
//Output: 2#include<stdio.h>

unsigned int hammingdist(unsigned int a, unsigned int b) {
	unsigned int result = a^b;
	unsigned int dist = 0;

	while (result) {
		dist += result & 1;
		 result >>= 1;
	}
	return dist;
}

int main() {
	unsigned int a = 1;
	unsigned int b = 4;

	unsigned int res = hammingdist(a,b);

	printf("The hamming dist between a and b is : %u\n",res);
}


