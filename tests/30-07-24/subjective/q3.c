/*Write a C program that defines a function pointer callback for handling events. Implement a function registerCallback(void (*callback)(int)) that registers a callback function to be called with an integer argument. Demonstrate the use of the callback function with different scenarios.*/

#include<stdio.h>

void callback(int a){
  printf("%d\n",++a);
}

void registerCallback(void (*callback)(int),int a){
  printf("callback called\n");
  callback(a);
}

int main(void){
 registerCallback(callback,7);
} 
