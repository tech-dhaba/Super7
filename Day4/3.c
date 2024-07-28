#include<stdio.h>
int main(void)
{
        char c;
        short s;
        int i;
        long l;
        long long ll;
        float f;
        double d;
        long double ld;
        int array[20];
        int *ptr = array;

        printf("size of c = %u\t size of char = %u\n"
                "size of s = %u\t size of short = %u\n"
                "size of i = %u\t size of int = %u\n"
                "size of l = %u\t size of long = %u\n"
                "size of ll = %u\t size of long long = %u\n"
                "size of f = %u\t size of float = %u\n"
                "size of d = %u\t size of double = %u\n"
                "size of ld = %u\t size of long double = %u\n"
                "size of array = %u\t",sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i, sizeof(int), sizeof l, sizeof(long), sizeof ll, sizeof(long long), sizeof f, sizeof(float), sizeof d, sizeof(double), sizeof ld, sizeof(long double), sizeof (array));
}

