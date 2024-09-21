//Write a program to input n integers into an array and calculate the sum of all the elements.

#include<stdio.h>

int sum(int arr[], int size) {
        int total = 0; // total is used to store the sum ini array
        for(int i=0; i<size; i++) {
                total += arr[i];
        }
        return total; // returns the total value
}

int main() {
        int arr[] = {1,2,3,4,5};
        int size = sizeof(arr) / sizeof(int);
        int cal = sum(arr , size);
        printf("sum : %d\n",cal);
}

//Create a program that takes n integers from the user and finds the maximum element in the array.

#include<stdio.h>

int findmaxnumber(int arr[], int size) {
    int max = 0; // max is to store the maximum value
    for(int i=0; i<size; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
     return max; // returns the max value
}

int main() {
    int arr[5];
    int size = sizeof(arr) / sizeof(int);

    for(int i=0; i<size; i++) {
     printf("Enter elements in array : ");
     scanf("%d",&arr[i]); // arr[i] gives the value of array from i=0 to 4.
    }
    int max = findmaxnumber(arr, size);
    printf("Max is: %d\n",max);
}


//Write a program that reverses the elements of an array and prints the reversed array.

#include<stdio.h>
void reversearray(int arr[], int size) {
    int beg = 0; // beg is to store starting value.
    int end = size-1; // end storing last value of array.
    while(beg < end) {
        int temp = arr[beg];
        arr[beg] = arr[end];
        arr[end] = temp;

        beg++; //beg incrementing
        end--; //end decrementing
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++) {
        printf("%d\t",arr[i]);
    }
    reversearray(arr,size);
    for(int i=0; i<size; i++) {
        printf("%d\t",arr[i]);
    }
}

//Implement a program that searches for a specific element in an array and returns its index, or a message if the element is not found.

#include<stdio.h>

void searchelement(int arr[], int size, int ele) {
    for(int i=0; i<size; i++) {
    if (arr[i] == ele) {
        printf("%d element is found at index %d",ele,arr[i]);
        return;
    }

    }
    printf("Invalid\n");
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);

    searchelement(arr,size,6);

}


//Write a program that counts the number of even and odd integers in an array.

#include<stdio.h>

void countoddeven (int arr[], int size) {
    int even = 0;
    int odd =0;
    for(int i=0; i<size; i++) {
        if((arr[i] % 2) == 0) {
            even++;
            }
        else if((arr[i] % 2) != 0) {
            odd++;
        }
    }
    printf("even no: %d\n",even);
    printf("odd no: %d\n",odd);
}

int main() {
     int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(int);
    countoddeven(arr,size);

}


//Implement a program that sorts an array of integers in ascending order using a simple sorting algorithm (like bubble sort).

#include <stdio.h>

void sortarray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {3, 6, 1, 4, 2, 7, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
 printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    sortarray(arr, size);

    printf("\nSorted Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

}


//Write a program that takes an array and removes any duplicate elements, printing the new array without duplicates.

 #include<stdio.h>

 void removedupl(int arr[], int size) {
     int count = 0;

     for(int i=0; i<size; i++) {
         int dup = 0;
         for(int j=0; j<count; j++) {
             if(arr[i] == arr[j]) {
                 dup = 1;
                 break;
             }
         }
             if(! dup) {
                                arr[count] = arr[i];
                 count++;
             }
     }
             printf("\nArray without dup:\n");
             for(int i=0; i<count; i++) {
                 printf("%d",arr[i]);
             }
 }

 int main() {
     int arr[] = {1,3,2,4,3,5,4,6,5,7};
     int size = sizeof(arr)/sizeof(int);
     printf("Original Array:\n");
     for(int i=0; i<size; i++) {
         printf("%d",arr[i]);
     }
     removedupl(arr,size);
 }


//Create a program that copies the elements from one array to another and prints both arrays.

#include<stdio.h>

void copyarray(int arr[], int size) {
    int array[size];
    for(int i=0; i<size; i++) {
        array[i] = arr[i];
    }
        printf("\nCopied Array:\n");
    for(int i=0; i<size; i++) {
        printf("%d",array[i]);
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    printf("Original Array:\n");
    for(int i=0; i<size; i++) {
        printf("%d",arr[i]);
    }
    copyarray(arr,size);
}

//Create a program that add elements of two sorted arrays into a single sorted array.

#include<stdio.h>

void addarray(int arr[], int array[], int size, int siize) {
    int Array[size];
    for(int i=0; i<size; i++) {
        Array[i] = arr[i] + array[i];
    }

    for(int i=0; i<size; i++) {
        printf("%d",Array[i]);
    }
}

int main() {
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    int array[] = {5,6,7,8};
    int siize = sizeof(array)/sizeof(int);

    addarray(arr,array,size,siize);
}



//Write a program that takes a 2D array as input and computes its transpose.

#include <stdio.h>

void transposearray(int matrix[2][2], int size) {
    int transpose[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transposed matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", transpose[i][j]);
        }
    }
}

int main() {
    int matrix[2][2];
    int size;

    printf("Enter the size of the square matrix");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    transposearray(matrix, size);

}
