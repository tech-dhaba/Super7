#include <stdio.h>

int main() {
    int a[5];
    int min;

    
    for(int Cnt = 0; Cnt < 5; Cnt++) {
        printf("Enter %d no.: ", Cnt);
        scanf("%d", &a[Cnt]);
    }
    
    
    min = a[0];

    for(int Cnt = 1; Cnt < 5; Cnt++) {
        if(a[Cnt] < min) {
            min = a[Cnt];
        }
    }

    printf("The minimum number is: %d\n", min);

    return 0;
}
