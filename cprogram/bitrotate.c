#include <stdio.h>

   // unsigned int leftRotate(unsigned int num, int rotations) {
   // int bitsCount = sizeof(num) * 8; 
   // rotations = rotations % bitsCount; 
  //  num = ((num << rotations)) | (num >> ( rotations));
//    return num >> rotations;

int left_rotate(int n, int d) {
    int num_bits = sizeof(int) * 8;
    d = d % num_bits;  
    return (n << d) | (n >> (num_bits - d));}

 int rightRotate( int num, int rotations) {
    int bitsCount = sizeof(num) * 8;
    rotations = rotations % bitsCount; 
   return (num >> rotations) | (num << ( bitsCount-rotations));
}
int main() {
    int num = 23;
    int rotations = 3; 
    printf("Original number: %u\n", num);
    int rotated = left_rotate(num, rotations);
    int rotated1 = rightRotate(num, rotations);
    printf("Number after left rotation by %d bits: %u\n", rotations, rotated);
    printf("Number after right rotation by %d bits: %u\n", rotations, rotated1);
    return 0;
}

