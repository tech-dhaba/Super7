//Create a program that uses an array to store student grades and calculates theaverage grade.
#include<stdio.h>
int main()
{
	int i,a[50],n;
	printf("Enter size of array of student score:\n");//defining array size
	scanf("%d",&n);
	printf("Enter score of students out of 100:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//entering values
	}
	printf("Score of student are:\n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",a[i]);//printing the values
        }
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+a[i+1];//calculating the sum
	}
	int av=a[i];
	printf("Average score of student is:%d\n",av);

}

