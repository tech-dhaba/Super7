#include<stdio.h>
#include<assert.h>

int myAtoi(const char* s){
  long long ans=0;
    while(*s!='\0'){
        ans=(10*ans+*s-'0');
        s++;
    }
    return ans;
}

static char *shift(int* argc, char*** argv){
  assert(*argc>0);
  char* result=**argv;
  *argc-=1;
  *argv+=1;
  return result;
}

int main(int argc,char*argv[]){
 (void)shift(&argc,&argv);
 int ans=0;
 while(argc)
   ans+=myAtoi(shift(&argc,&argv));
 printf("%d\n",ans);
}
