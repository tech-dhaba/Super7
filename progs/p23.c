/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct str {
    int i;
    char c;
    int *p;
    char *cc;
};


int main() {
    struct str s;
    s.i=10;
    s.c='s';
    s.p=&(s.i);
    s.cc=&(s.c);
    unsigned char *cptr=(unsigned char*)&s;
    for(int i=0;i<sizeof(s);i++){
        printf("%x ",cptr[i]);
    }
    int z=0;
    char zc=0;
    unsigned char *zcptr=(unsigned char*)&zc;
    for(int i=0;i<sizeof(int);i++){
        ((unsigned char*)&z)[i]=*(cptr+i);
    }
    printf("\n%d",z);
    // printf("Hello World");

    return 0;
}
