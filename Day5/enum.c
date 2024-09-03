#include<stdio.h>
enum{
	Monday=0,
	Tuesday=1,
	Wednesday=2,
	Thursday=3,
	Friday=4,
	Saturday=5,
	Sunday
};
int main()
{
	int i;
	for(i=Monday;i<=Sunday;i++)
	{
		printf("%d\n",i);
		switch(i){
                case Monday:
                        printf("Monday\n");
                        break;
                case Tuesday:
                        printf("Tueday\n");
                        break;
                case Wednesday:
                        printf("Wednesday\n");
                        break;
                case Thursday:
                        printf("Thursday\n");
                        break;
                case Friday:
                        printf("Friday\n");
                        break;
                case Saturday:
                        printf("Saturday\n");
                        break;
                case Sunday:
                        printf("Sunday\n");
                        break;
		}

        }
	return 0;
}
