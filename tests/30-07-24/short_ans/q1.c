/*Explain the concept of pointers in C. How are pointers declared, initialized, and used? Provide examples.*/

//pointers are special variables that store addresses of variables, structs and functions

int main(void){
  int a=5;
  int *ptr=&a;//pointer to a variable
  struct str{
    int a;
    char c;
  }str;
  struct str *_str=&str;//pointer to struct
  int (*fnptr)(void)=main;//pointer to a function
}

