#include<stdio.h>
typedef struct{
char name[8];
int roll;
int marks;
}str;

int max_marks(str *s[3]){
int a;
int max;
for(int i=0;i<2;i++){
max=s[0]->marks;	
if((s[i+1]->marks)>max){
max=s[i+1]->marks;
a=i+1;
}

}
return a, max;
}

int main(){
str s1,s2,s3;
str *ptr[3]={&s1,&s2,&s3};
for(int i=0;i<3;i++){
printf("enter name,marks and roll for student(%d)\n:",i);	
scanf("%s\n",ptr[i]->name);
printf("name of student(%d) is %s\n",i,ptr[i]->name);
scanf("%d\n",&ptr[i]->marks);
printf("marks if student(%d) is %d\n",i,(ptr[i]->marks));
scanf("%d\n",&ptr[i]->roll);
printf("roll of student(%d) is %d\n",i,ptr[i]->roll);
}
int index;
int max;
index,max=max_marks(ptr);
printf("%s has max marks %d\n",(ptr[index]->name),max);

return 0;
}


