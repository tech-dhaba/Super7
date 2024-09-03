////Write a function that checks if two numbers differ by only one bit type 2 for different bits
#include<stdio.h>
void check(int n1, int n2)
{
	int i,j;
	int l1=sizeof(n1)*8;
	int l2=sizeof(n2)*8;
	int c1=0,c2=0;
	for(i=0;i<l1;i++)
	{
		if(n1&1)
		{
			c1++;
		}
		//else
	//	{
	//		printf("None\n");
	//	}
	}
	printf("C1=%d\n",c1);
	for(j=0;j<l1;j++)
        {
                if(n2&1)                                                                                                                                                                  {
                        c2++;                                                                                                                                                              }
          //      else                                                                                                                                                                      {
            //            printf("None\n");
              //  }
        }
        printf("C2=%d\n",c2);
	if(c1==c2)
	{
		printf("No bit difference\n");
	}
	else if(|c2-c1|==1)
	{
		printf("One bit difference\n");
	}
	else
	{
		printf("More than one bit difference\n");
	}
}
int main()
{
        int n1,n2;
        printf("Enter 2 nos.\n");
        scanf("%d %d",&n1,&n2);
        check(n1,n2);
        return 0;
}
