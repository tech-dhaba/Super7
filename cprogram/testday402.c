//Bitwise Swapping:
//Without using a temporary variable, swap the values of two integer variables using only bitwise operators.
//2. Counting Set Bits:
//Write a function to count the number of set bits in an integer.
//3. Reversing Bits:
//Reverse the order of bits in an integer.
#include<stdio.h>
int count_set_bits(unsigned int num) {
     int count = 0;
     while (num) {
         count += num & 1;
         num >>= 1;
     }
     return count;
}
void bitwise_swap(int *a, int *b) {
   if (a != b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}
unsigned int reverse_bits(unsigned int num) {
     unsigned int result = 0;
     int bits = sizeof(num) * 8;
     for (int i = 0; i < bits; i++) {
        result = (result << 1) | (num & 1);
        num >>= 1;
    }
    return result;
}

int main(){
int c=count_set_bits(7);
printf("the no if set bits = %d \n",c);
int a=5,b=7;
bitwise_swap(&a,&b);
printf("No. after been swaped %d , %d \n",a,b);
unsigned int d = 0b0001 ;
unsigned int g = reverse_bits(d) ;

printf("the reverse bit %u = %u \n",d,g);
}
