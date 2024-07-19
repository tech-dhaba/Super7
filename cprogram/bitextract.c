#include<stdio.h>
unsigned int extract(int x,int y,unsigned int num)// to extract number btw a given position
{
     int width = y- x + 1;
     unsigned int mask = (1 << width) - 1;
     mask <<= x;
     unsigned int result = (num & mask) >> x;
     return result;

}
int main(void)
{
	unsigned int num = 305; // (binary: 00000001 00111001)
    int start = 3; 
    int count = 4; 
    
    printf("Original number: %u\n", num);
    
    unsigned int extracted = extract(num, start, count);
    printf("Extracted %d bits from position %d: %u\n", count, start, extracted);
    
    return 0;	
}
