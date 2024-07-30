#include <stdio.h>
unsigned int rotate_left(unsigned int num, int n) {
    int bits = sizeof(num) * 8; 
    n %= bits; 
    return (num << n) | (num >> (bits - n));
}
int count_set_bits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int is_power_of_two(unsigned int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}
void bitwise_swap(int *a, int *b) {
    if (a != b) { 
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}
int find_single_element(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
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
int find_missing_number(int arr[], int size) {
    int xor_all = 0;
    int xor_range = 0;

    for (int i = 0; i < size; i++) {
        xor_all ^= arr[i];
    }
    for (int i = 1; i <= size + 1; i++) {
        xor_range ^= i;
    }
    return xor_all ^ xor_range;
}
unsigned int range_bitwise_and(unsigned int m, unsigned int n) {
    while (n > m) {
        n &= (n - 1);
    }
    return n;
}
int have_same_binary_representation(unsigned int a, unsigned int b) {
    while (a && b) {
        a >>= 1;
        b >>= 1;
    }
    return (a == b);
}
void generate_subsets(unsigned int bitmask) {
    unsigned int subset;
    unsigned int mask = bitmask;
    while (mask) {
        subset = mask;
        printf("{ ");
        for (int i = 0; i < sizeof(bitmask) * 8; i++) {
            if (subset & (1 << i)) {
                printf("%d ", i);
            }
        }
        printf("}\n");
        mask = (mask - 1) & bitmask;
    }
    printf("{ }\n");
}
int main() {
//1
    unsigned int num = 0b1011;
    int n1 = 2;
    printf("Rotate Left:%d -> %d\n", num, rotate_left(num, n1));
//2
    num = 0b1011;
    printf("Count Set Bits:%d = %d\n", num, count_set_bits(num));
//3
    unsigned int test = 16;
    printf("Is Power of Two: %d\n", is_power_of_two(test));
//4
    int a = 5, b = 7;
    bitwise_swap(&a, &b);
    printf("Bitwise Swap: a = %d, b = %d\n", a, b);
//5
    int arr[] = {1, 2, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Single Element: %d\n", find_single_element(arr, size));
//6
    num = 0b00000010100101000001111010011100;
    printf("Reverse Bits:%d -> %d", num, reverse_bits(num));
//7
    int arr_missing[] = {1, 2, 4, 5};
    size = sizeof(arr_missing) / sizeof(arr_missing[0]);
    printf("Missing Number: %d\n", find_missing_number(arr_missing, size));
//8
    unsigned int m = 5;unsigned int  n = 7;
    printf("Bitwise AND Range: %u & %u = %u\n", m, n, range_bitwise_and(m, n));
//9
    unsigned int a1 = 0b101, b1 = 0b0101;
    printf("Same Binary Representation: %d\n", have_same_binary_representation(a1, b1));
//10
    unsigned int bitmask = 0b101;
    printf("Generate Subsets:\n");
    generate_subsets(bitmask);
    return 0;
}

