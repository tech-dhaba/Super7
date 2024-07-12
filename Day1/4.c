//reverse of a string
#include<stdio.h>
void rev(char *str) {
    int i = 0, size = 0;
    char temp;
    
    while (str[size] != '\0') {
        size++;
    }
    
    int j;
    for (i = 0, j = size - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s",str);
}

int main() {
    char str[200];

    printf("Enter the string: ");
    scanf("%s", str);  
    rev(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

