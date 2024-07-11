/*Function Pointer for Data Printing: Create a function print_data that takes a void pointer (void*) as an argument and an integer representing the data type (int, float, char). Based on the data type, cast the void pointer to the appropriate type and print its value. Utilize this function pointer with different data types to demonstrate its versatility.*/

#include<stdio.h>

void print_int(int *x){
  printf("%d",*x);
} 

void print_float(float *x){
  printf("%f",*x);
}

void print_char(char *x){
  printf("%c",*x);
}

void print_data(void(*fn)(void*),unsigned int dtype){
  switch (dtype){
    case 1:{}

int main(void)

