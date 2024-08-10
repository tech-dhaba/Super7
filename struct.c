#if 0 
#include<stdio.h>
int main() {
const int num =5;
const int* ptr;
// Declare a constant type integer variable
ptr = &num;
// Declare a constant type pointer to an integer value
// Assign this address of num to the pointer
//Try to change the values pointed to by pr
// This will result in a compilation error since the value is constant
*ptr == 10;
//Try to reassign the pointer values to point to a different constant valu
// This is allowed because the pointer itself is not constant
const int new_num = 8;
ptr = &new_num;
//Print the values of the num and the new rum
printf("num = %d\n",num);
printf("new_num = d\n", new_num);
//Print the values chat are pointed no by the pointer
printf("*ptr = %d\n", *ptr);
const int *ptr;
int const *ptr;
return 0;
｝


#elif 0


#include<stdio.h>
struct abc
{
	char x;
	int e;
	char i;
	int f;
	double g;
	//double h;

};

int main()
{
	int s = sizeof(struct abc);
	printf("%d\n",s);
	return 0;
}



#elif 1

#include<stdio.h>
void example()
{
        int a=10;
        int b=20;
        //1.constant pointer to a value
        const int *ptr1=&a;//pointer to a constant integer
        printf("Value of a using ptr1:%d\n",*ptr1);
        // *ptr1=15;//Error:cannot modify the value pointed to by ptr1
        ptr1=&b;//OK: can change pointer to another address
        printf("Value of b using ptr1:%d\n",*ptr1);
        //2. constant pointer to address
        int *const ptr2=&a;//constant pointer to an integer
        printf("Value of a using ptr2:%d\n",*ptr2);
        *ptr2=30;//OK: can modify the value pointed to by ptr2
        printf("Value of a using ptr2:%d\n",*ptr2);
        //ptr2=&b;//Error : cannot change the address stored in ptr2
        //3.const pointer to const value
      What is a pointer in C, and how do you declare and initialize one?
Pointer Arithmetic
  const int *const ptr3=&a;//constant pointer to a constant integer
        printf("Value of a using ptr3:%d\n",*ptr3);

        //*ptr3=40;//Erro: cannot modify the value pointed to by ptr3
        //ptr3=&b;//Error:cannot change the address stored in ptr3
}
int main()
{
        example();
        return 0;
}


#elif 0


#include<stdio.h>

int checkEvenOrOdd(int num)
{
	if(num%2==0)
		goto even;
	else
		goto odd;
even:
	printf("%d is even",num);
	return;
odd:
	printf("%d is odd",num);
}
int main () 
{
	int num = 26;
	checkEvenOrOdd(num);
	return 0;
}


#elif 0


#include<stdio.h>
enum weekdays{
	mon,
	tue,
	wed,
	thur,
	fri,
	sat,
	sun
};
int main(){
for (int i=mon ; i<=sun ; i++){
	printf("%d",i);
}

printf("%d",monn);
printf("%d",mon);
printf("%d",tue);
printf("%d",wed);

return 0;
}



#elif 0

#include<stdio.h>
	int add(int a,int b)
	{
		return a+b;
	}	
	int sub(int a,int b)
	{
        	return a-b;
	}
	int mul(int a,int b)
	{
        	return a*b;
	}
	int div(int a,int b)
	{
        	return a/b;
	}
enum{
        summer,
	spring,
	autoum,
	winter
};
int main()
{
	int n=5;
	int m=5;
addition:
	printf("%d\n",add(n,m));
//	goto last;
	//break;
subtraction:
	printf("%d\n",sub(n,m));
//	goto last;
	//break;
multiplication:
	printf("%d\n",mul(n,m));
//	goto last;
	//break;
division:
	printf("%d\n",div(n,m));
	goto last;
//	break;
	
	for(int i=summer ; i<=winter ; i++)
	{
		switch(i)
		{
			case summer:
				//printf("%d\n",add(n,m));
				goto addition;
				break;
			case spring:
                        	//printf("%d\n",sub(n,m));
				goto subtraction;
				break;
			case autoum:
                        	//printf("%d\n",mul(n,m));
				goto multiplication;
				break;
			case winter:
                                //printf("%d\n",div(n,m));
				goto division;
				break;
			default:
				printf("default");
		}
	}
last:
	return 0;
}



#elif 0

#include<stdio.h>
enum Product_category{
	 ELECTRONICS = 5,
	 d_E=6,
	 d_A=5,
	 d_G=5,
	 APPAREL = 10,
	 GROCERIES = 18,
	 p_E=2000,
	 p_A=1000,
	 p_G=500
};

int main()
{
	for(int i = ELECTRONICS ; i<GROCERIES ; i++)
	{
		//printf("%d\n",i);

		switch(i)
		{
			case ELECTRONICS:
				//printf("The percent of tax on Electronics is = %d\n",ELECTRONICS);
				goto ELECTRONICS;
				break;
			case APPAREL:
                                //printf("The percent of tax Apparel is = %d\n",APPAREL);
                                goto APPAREL;
				break;
			case GROCERIES:
                                //printf("The percent of tax on Groceries is = %d\n",GROCERIES);
                                goto GROCERIES;
				break;
			default:
				printf("Default");
				break;
		}
		
	}
ELECTRONICS:
	printf("1\n");
	printf("Electronics : \n");
	printf("Price :%d Rupee\n",p_E);
	printf("Tax :%d percent\n",ELECTRONICS);
	printf("Discount : %d percent\n",d_E);
	printf("-------------------------------\n");
APPAREL:
	printf("2\n");
	printf("Apparel : \n");
	printf("Price :%d Rupee\n",p_A);
        printf("Tax :%d percent\n",APPAREL);
        printf("Discount : %d percent\n",d_A);
	printf("-------------------------------\n");
GROCERIES:
	printf("3\n");
	printf("Groceries : \n");
	printf("Price :%d Rupee\n",p_G);
        printf("Tax :%d percent\n",GROCERIES);
        printf("Discount : %d percent\n",d_G);
	printf("-------------------------------\n");


	int n;
	printf("Enter any number from 1-3 : ");
	scanf("%d",&n);
	if(n == 1)
	{
		int d_amount = (p_E*(d_E/100));
		int t_amount = (p_E*(ELECTRONICS/100));
		int f_amount = (p_E - d_amount + t_amount);
		printf("The final price : %d",f_amount);
	}
	else if(n == 2)
        {
                int d_amount = (p_A*(d_A/100));
                int t_amount = (p_A*(APPAREL/100));
                int f_amount = (p_A - d_amount + t_amount);
                printf("The final price : %d",f_amount);
        }
	else if(n==3)
        {
                int d_amount = (p_G*(d_G/100));
                int t_amount = (p_G*(GROCERIES/100));
                int f_amount = (p_G - d_amount + t_amount);
                printf("The final price : %d",f_amount);
        }
		

	return 0;
}

#elif 0

#include<stdio.h>

enum{
	add,
	sub,
	mul,
	div
};
int main()
{
	int n,m;
	printf("Enter the value of a less than 100: \n");
	scanf("%d",&n);
	printf("Enter the value of b less than 100: \n");
	scanf("%d",&m);
	for(int i=add ; i<=div ; i++)
	{
		//printf("%d",i);
		switch(i)
		{
			case add:
				goto addition;
				break;
			case sub:
				goto subtraction;
				break;
			case mul:
				goto multiplication;
				break;
			case div:
				goto division;
				break;
			default:
				goto error;
				break;

		}
	}
addition:
	if(n<=100 || m<=100)
	{
		printf("Addition : %d\n",n+m);
	}
	else
	{
		goto error;
	}
subtraction:
	if(n<=100 || m<=100)
	{
        printf("Subtraction : %d\n",n-m);
	}
	else
	{
		goto error;
	}
multiplication:
	if(n<=100)
	{
        	printf("Multiplication : %d\n",n*m);
	}
	else
	{
		goto error;
	}
division:
	if(n>m)
	{
        	printf("Division : %d\n",n/m);
	}
	else if(n<=0)
	{
		goto error1;
		
	}
	else if(m<=0)
        {
                goto error1;
                
        }

error1:
	printf("Division : Default error");
error:
	printf("Default error");
	return 0;
}



#elif 0
#include<stdio.h>
struct student{
    char name[12];
    unsigned int roll:11;
    unsigned int sub1:7;
    unsigned int sub2:7;
    unsigned int sub3:7;
};

int main() {
    struct student s1;
    s1.roll = 42;
    s1.sub1 = 95;
    s1.sub2 = 90;
    s1.sub3 = 98;
    strcpy(s1.name,"Khushdeep");

    printf("Name : %s\n",s1.name);
    printf("Roll number : %d\n",s1.roll);
    printf("Sub 1 : %u\n",s1.sub1);
    printf("Sub 2 : %u\n",s1.sub2);
    printf("Sub 3 : %u\n",s1.sub3);

   
    int s = sizeof(struct student);
    printf("Size of structure : %d",s);
    return 0;
}


#elif 0
#include<stdio.h>
//int 
struct traffic_light
{
	unsigned int red:1;
	unsigned int yellow:1;
	unsigned int green:1;
};
int main()
{
	int s = sizeof(struct traffic_light);
	printf("Size: %d",s);
	return 0;
}












#else
#endif
