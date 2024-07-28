#include<stdio.h>
int find_single_element(int arr[],int size){
        int r=0;
    for (int i = 0; i < size; i++) {
        r^=arr[i];
    }
    return r;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = find_single_element(arr, size);
    printf("The single  element is: %d\n",result);

    return 0;
}

