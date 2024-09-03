#include<stdio.h>
#define max 10

int minimumPushes(char word[max]) 
{
    int push=0;
    int value=0;
    for(int j=0;j<max;j++)
    {
        if(word[j]=='a' || word[j]=='b' || word[j]=='c' || word[j]=='d' || word[j]=='e' || word[j]=='p' || word[j]=='t' || word[j]=='w')
        {
            value=1;
	    //push = push + value;

        }

        else if(word[j]=='f' || word[j]=='h' || word[j]=='j' || word[j]=='l' || word[j]=='n' || word[j]=='q' || word[j]=='u' || word[j]=='x')
        {
            value=2;
	    //break;
        }
        else if(word[j]=='g' || word[j]=='i' || word[j]=='k' || word[j]=='m' || word[j]=='o' || word[j]=='r' || word[j]=='v' || word[j]=='y')
        {
            value=3;
	    //break;
        }
        else if(word[j]=='z' || word[j]=='s')
        {
            value=4;
	    //break;
        }
	else
		value=0;
        push=push+value;
    }
    return push;
	
}
int main()
{
    char str[max];
    printf("enter string:\n");
    scanf("%s",str);
    printf("minimum no. of pushes are:%d\n",minimumPushes(str));
    return 0;
}
