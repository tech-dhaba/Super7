#include<stdio.h>

int setbits(unsigned int a){
        int setbits=0;
      again: 
       if(a==0)
	return setbits;
       else {
        if(a&1 ==1){setbits++;a>>=1;}
	else a>>=1;
	}
	goto again;
}
int setbbits(unsigned int a,int p){
    if(a==0){
    	 return p;
	}
    else {
    	if(a&1==1){
    	p++;
    	return(setbbits((a>>=1),p));
        }
    else {
   	 return(setbbits((a>>=1),p));
        }  
	} 
}
void main(){
    unsigned int c = 7;
    int a =setbits(c);
    int b=0;
     b=setbbits(c,b);
    printf("%d\n",a);
    printf("%d\n",b);
}
