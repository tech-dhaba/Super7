#include<stdio.h>
int printline(int num , char c)
{
    for(int i=0;i<=num;i++)
    {
    printf("%c",c);
    }
    //printf("\n");
}
int main()
{
    int n;
    char c = '*';
    printf("enter the nmber:");
    scanf("%d",&n);
   
    printline(n, c);

   // printline();
    return 0;

}

