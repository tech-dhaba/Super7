#include<stdio.h>

 union Ut {
    struct st {
        unsigned char x0:1;
        unsigned char x1:1;
        unsigned char x2:1;
        unsigned char x3:1;
        unsigned char x4:1;
        unsigned char x5:1;
        unsigned char x6:1;
        unsigned char x7:1;
        unsigned char x10:1;
        unsigned char x11:1;
        unsigned char x12:1;
        unsigned char x13:1;
        unsigned char x14:1;
        unsigned char x15:1;
        unsigned char x16:1;
        unsigned char x17:1;
        unsigned int x21:1;
    } Strct_x_y;
   // int var;
} Union_Var;
int main(){
    union Ut obj;
    obj.Strct_x_y.x7 = 1;
    printf("status %d\n",obj.Strct_x_y.x7); 
    printf("size %d\n",sizeof(obj));
    return 0;
}
