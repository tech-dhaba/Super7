#include<stdio.h>
#include <stdlib.h>
#include<string.h> 
int stringto(char * a){
 int c= 0;
  while (*a!='\0'){
 if(*a>='0' && *a <='9'){
     c=c*10+(*a-48);}
 a++;
 }
return c;
}
int sign(char *a){ while (*a!='\0'){ if (*a== '-' ) {return 1;} else {return 0;}}}
int main(int argc,char *argv[]){
int c1=0;int c2=0;
int len1=sizeof(argv[1])/sizeof(char);
int len2=sizeof(argv[2])/sizeof(char);

	for(int i=0;i<len1-1;i++)
	{
//	    c1=stringto(argv[1]);
	    c1 = c1*10+(argv[1][i]-'0');
	}
printf("%d",c1);
// 	    c1 = c1*10+(arg[1][i]-'0');
//	for(int i=0;i<len2-1;i++)
//	{
	    c2=stringto(argv[2]);
//	}
 
if(sign(argv[3])){
printf("%d",c2-c1);
}
else{
printf("%d",c1+c2);}
// for(int i=1;i<argc;i++){
  //      printf("%s",argv[i]);
            
//
//printf("%d",c);
}
