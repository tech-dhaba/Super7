//reverse a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i=0,size=0;
    puts("Enter string:");
    gets(str);
    int k,j;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("The size of string is %d\n",size);
    char temp;
  /*  for(k=0,j=size-1;k<=j;k++,j--){
        temp=str[k];
        str[k]=str[j];
        str[j]=temp;
    }
    puts("The reverse of string is");
    puts(str);*/
    int sz=0,m=0;
    while(str[m]!='\0')
    {
	    m++;
	    sz++;
	    if(str[m]!=' ')
	    {

	    }
    }
    /*for(k=0,j=sz+1;k<sz-1,j<size;k++,j++)
    {
	    temp=str[k];
	    str[k]=str[j];
	    str[j]=temp;

    }*/
    puts("string is:");
    puts(str);
    return 0;
}
