// regenerating structure with character pointer (little endian system )
#include<stdio.h>
#include<stdint.h>
typedef struct {
	int a;
	int b;
	char c;
}node;

node d(char *c)
{
  node x;	
  x.a=(uint8_t)*c|(uint8_t)*(c+1)<<8|(uint8_t)*(c+2)<<16|(uint8_t)*(c+3)<<24;
  x.b=(uint8_t)*(c+4)|(uint8_t)*(c+5)<<8|(uint8_t)*(c+6)<<16|(uint8_t)*(c+7)<<24;
  x.c=*(c+8);
  printf("%d\n",x.a);
  printf("%d\n",x.b);
  printf("%c\n",x.c);
  return x;
}

int main(void)
{
	
  node x={10101001,10102933,'s'};
  node*c=&x;
  d((char*)c);
}
