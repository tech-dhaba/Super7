#include<stdio.h>
#define max 5
typedef struct{
  char name[20];
  int roll;
  int num;
  int marks;
}Student;
void modify(Student *a,void (*fp[])(Student *),int ind){  fp[ind](a);}
void sortmarks(Student *s){
    for(int i =0;i<max;i++){
            
       for(int j=i;j<max;j++)
        {
		if(s[i].marks >s[j].marks)
		{
			Student p=s[i];
			s[i]=s[j];
			s[j]=p;
		}	
	}
}
     
}
void highest(Student *s){
	int c=0;int h;
        for(int i =0;i<max;i++)
	{
		if(s[i].marks>c){
		c=s[i].marks;
       		h=i;
		}	
	}
        printf("Student with highest marks is %s and marks is %d",s[h].name,c);
}
int main(){
   printf("Enter the no of student =");
   int n ;scanf("%d",&n);
   Student s[max];
   printf("Enter the details of the student \n");
   for(int i =0;i<max;i++)
   {
		printf("Student no %d\n",i+1);printf("Name = ");
                scanf("%s",s[i].name);
   		printf("Roll =");scanf("%d",&s[i].roll);
   		printf("Mob number =");scanf("%d",&s[i].num);
   		printf("Marks =");scanf("%d",&s[i].marks);
         
   }
 	void (*fp[2])(Student *)={sortmarks,highest};
        modify(s,fp,0);
	modify(s,fp,1);
        for(int i =0;i<max;i++){
	printf("%s",s[i].name);
	printf(" ,%d",s[i].roll );
	printf(" ,%d",s[i].num );
	printf(" ,%d",s[i].marks );
	printf("\n");
	}      
        
}
