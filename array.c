#include <stdio.h>

int main()
{
    int arr[]={1,2,3,0,3,2,0,1};
    int len=sizeof(arr)/sizeof(int);
    int newArr[len];
    int j = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] != 0){
            newArr[j] = arr[i];
            j=j+1;
        }
    }

   
    while(j < len){
        newArr[j] = 0;
        j=j+1;
    }

  
    for(int i = 0; i < len; i++){
        printf("%d ", newArr[i]);
    }

    return 0;
}

