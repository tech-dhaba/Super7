
#include<stdio.h>

enum day{
        Mon = 0,
        Tues,
        Wed,
        Sun
};
int main()
{

        for (int i=Mon; i<=Sun; i++)
        {
Today:
        printf("Today is Monday\n");
        return 0;
Yesterday:
        printf("Yesterday was Monday\n");

        if(i == 0)
        {
                goto Today;
        }
{
                goto Yesterday;
        }
        }
        return 0;
        }

