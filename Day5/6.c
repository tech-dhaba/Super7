//Write a function that extracts a specific range of bits from a number.
#include<stdio.h>
void extract(int num, int r1, int r2) {
    int len = sizeof(num) * 8;
    if (r1 < 0 || r2 >= len || r1 > r2) {
        printf("Invalid range\n");
        return;
    }

    int mask = (1 << (r2 - r1 + 1)) - 1; 
    int extracted_bits = (num >> r1) & mask; 

    printf("The output of range is: %d\n", extracted_bits);
}
int main()
{
	int n,r1,r2;
	printf("Enter no.:\n");
	scanf("%d",&n);
	printf("Enter range:\n");
	scanf("%d%d",&r1,&r2);
	extract(n,r1,r2);
}
