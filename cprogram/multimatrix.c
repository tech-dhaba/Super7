#include<stdio.h>
#include<stdlib.h>
void multiply(int **a1,int ** a2,int **result,int m,int n){
for (int i = 0; i < m; i++) {
           for (int j = 0; j < n; j++) {
               result[i][j] = 0;
           }
       }
       for (int i = 0; i < m; i++) {
           for (int j = 0; j < n; j++) {
               for (int k = 0; k < n; k++) {
                   result[i][j] += a1[i][k] * a2[k][j];
               }
           }
       }
}
int main(){
    int m =3,n=3;
    int **a1 = (int **)malloc(m * sizeof(int *));
    int **a2 = (int **)malloc(m * sizeof(int *));
    int **result = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        a1[i] = (int *)malloc(n * sizeof(int));
        a2[i] = (int *)malloc(n * sizeof(int));
        result[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a1[i][j]);
        }
    }
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a2[i][j]);
        }
    }
multiply(a1,a2,result,m,n);
printf("The resultant matrix\n");

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
           printf("%d " ,result[i][j]);
      }
     printf("\n");
    }

}
