//Define a union to represent either an integer or a floating-point number.
//Implement functions to safely store and retrieve values from the union based on a given flag.
//Discuss the potential issues and safeguards to prevent data corruption.
#include<stdio.h>
union number
{
	int i;
	float f;
};
enum numbertype
{
	INTEGER,
	FLOAT
};
struct safenos
{
	union number no;
	enum numbertype type;
};
void store_integer(struct safenos *sn,int value)
{
	sn->no.i=value;
	sn->type=INTEGER;
}
void store_float(struct safenos *sn,int value)
{
	sn->no.f=value;
	sn->type=FLOAT;
}
int retrieve_integer(struct safenos *sn)                                                                                                          {
        if(sn->type != INTEGER)
        {
                printf("ERROR:in retrieving integer value\n");
        }
        return sn->no.i;
}
int retrieve_float(struct safenos *sn)
{
	if(sn->type != FLOAT)
	{
		printf("ERROR:in retrieving float value\n");
	}
	return sn->no.f;
}
int main()
{
	struct safenos sn;
	store_integer(&sn,42);
	printf("stored integer:%d\n",retrieve_integer(&sn));
	store_float(&sn,3.14);
        printf("stored float:%d\n",retrieve_float(&sn));
	printf("Attempting to retrieve integer from float union :%d\n",retrieve_integer(&sn));
	return 0;
}
