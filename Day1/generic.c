#include<stdio.h>

/*void gen(void *ptr,void *value,int dt){
	switch(dt):{
		case '1':
			;
		case '2':
			return int;
		case '3':
			return float;
	}
	default:
		printf("ERROR");

}


int main(){
	int dt;
	printf("Enter datatype case:%d\n",&dt);

	return 0;
}*/
int main(){
	int arr[5]={5,10,12,14,18,20};
	int p1,p2;
	p1=arr[0];
	p2=arr[3];
	int c;
	c=p1-p2;
	printf("%d",c);
	return 0;

}
