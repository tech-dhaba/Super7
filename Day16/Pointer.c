//Write a function that swaps the values of two integers using pointers. The function should take two integer pointers as arguments.

#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5;
    int b = 10;
    
    swap(&a,&b);
    printf("%d %d",a,b);
    
}


//Create a function that calculates the sum of elements in an integer array using pointers. The function should accept the array and its size as arguments.

#include<stdio.h>

int sumarray(int arr[], int size) {
    int sum = 0;
    int *ptr = arr; // Giving the first value of array to pointer
    for(int i=0; i<size; i++) {
        sum += *(ptr+i);
    }
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    
    int sum = sumarray(arr,size);
    printf("%d",sum);
    return 0;
}


//Implement a function that computes the length of a string using pointers, without using the strlen() function. The function should take a string as an argument.

#include<stdio.h>
#include<string.h>

int complength(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr-str;
}

int main() {
    char str[] = {"Hello World How are you"};
    int length = complength(str);
    printf("%d",length);
    
}


//Write a function that finds the maximum value in an array of integers using pointers. The function should return a pointer to the maximum element.

#include<stdio.h>

int maxvalue(int arr[], int size) {
    int *ptr = arr;
    for(int  i=0; i<size; i++) {
        if(*ptr < arr[i]) {
            *ptr = arr[i];
        }
    }
    return *ptr;
}

int main() {
    int arr[] = {1,4,9,3,6,4,7};
    int size = sizeof(arr)/sizeof(int);

    int max = maxvalue(arr,size);
    printf("%d",max);
}


//Create a function that reverses a string in place using pointers. The function should take a character pointer as an argument and reverse the string without using any additional arrays.

#include<stdio.h>
#include<string.h>

void revstr(char *str) {
    char *ptr = str;
    char *pptr = str + strlen(str) - 1;

    while(ptr < pptr) {
        char temp = *ptr;
        *ptr = *pptr;
        *pptr = temp;
    ptr++;
    pptr--;
    }
}

int main() {
    char str[] = "Hello";
    printf("my string: %s\n",str);
    revstr(str);
    printf("After rev: %s\n",str);
}


//Implement a program that dynamically allocates memory for an array of integers, fills it with values, and then frees the allocated memory. Use pointers to manipulate the array.

#include<stdio.h>
#include<stdlib.h>

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int *arr = (int *)malloc(size * sizeof(int));

    for(int i=0; i<size; i++) {
        *(arr + i) = i + 1;
        printf(" %d ",*(arr + i));
    }

    free(arr);
    arr = NULL;

}


//Write a function that copies one string to another using pointers. The function should take two character pointers as arguments: the source string and the destination string.

#include<stdio.h>
#include<string.h>

void stringcopy(char *str, char *sstr) {
    char *ptr = str;
    char *pptr = sstr;
    while(*ptr != '\0') {
    *pptr = *ptr;
    ptr++;
    pptr++;
    }
    *pptr = '\0';

}

int main() {
    char str[] = "hello";
    char sstr[22];

    stringcopy(str,sstr);
    printf("copied string: %s\n",sstr);
}


//Create a function that counts the number of vowels in a string using pointers. The function should take a string as an argument and return the count.

#include <stdio.h>

int countVowels(char *str) {
    int count = 0;
    char *ptr = str;

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    char *myString = "Hello, World!";
    int vowelCount = countVowels(myString);
    printf("Number of vowels: %d\n", vowelCount);
    return 0;
}


//Write a function that sorts an array of integers in ascending order using pointers and the bubble sort algorithm. The function should accept the array and its size as arguments.

#include <stdio.h>

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {

                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("Sorted Array:\n");
    printArray(arr, size);

    return 0;
}


//Create a function that takes a pointer to an integer and changes its value to 100.

#include <stdio.h>

void changeValue(int *ptr) {
    *ptr = 100;
}

int main() {
    int num = 0;
    printf("Before change: %d\n", num);
    changeValue(&num);

    printf("After change: %d\n", num);

    return 0;
}


//Create a function that takes an array of integers and its size, and prints the elements using a pointer.

#include <stdio.h>

void printArray(int *arr, int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); 
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]); 

    printArray(arr, size);
    return 0;
}

//Write a function that takes an integer pointer and checks if the value it points to is even or odd, returning a string accordingly

#include <stdio.h>

char* checkEvenOdd(int *ptr) {
    if (*ptr % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int num1 = 10;
    int num2 = 15;

    printf("The number %d is %s.\n", num1, checkEvenOdd(&num1));
    
    printf("The number %d is %s.\n", num2, checkEvenOdd(&num2));

    return 0;
}


//Implement a function that calculates the length of an array of integers using a pointer, without passing the size explicitly.

#include <stdio.h>

int arrayLength(int *arr) {
    int length = 0;
    while (*arr != -1) {
        length++;
        arr++;
    }
    return length;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, -1};

    int length = arrayLength(arr);

    printf("The length of the array is: %d\n", length);

    return 0;
}


//Write a program that creates an array of string literals (using character pointers) and prints each string using a loop.

#include <stdio.h>

int main() {
    char *strings[] = {
        "Hello, World!",
        "Welcome to my code.",
        "My name is Kushal.",
        "I work at Tech Dhaba.",
        "Goodbye!"
    };

    int size = sizeof(strings) / sizeof(int);

    printf("Strings in the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

