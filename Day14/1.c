#include<stdio.h>

int setBits( unsigned int a) {
	int value = 0; 
checkbits :

	if (a == 0) 
		goto end;

	if ( a & 1 ) 
		value ++;
	
	a = a >> 1;
	goto checkbits;
end :
	return value;

}
int main() {
	unsigned int a;
	printf("Value is:");
	scanf("%u",&a);
	int value = setBits(a);
	printf("%u\n",value);
}

	
