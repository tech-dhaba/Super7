/*Describe the differences between struct and union in C. How do they affect memory allocation? Provide examples.*/

//structs and unions are special data types that are defined by programmers a struct takes the size ofsum of all the
//variables init while a union occupies the size of largest element init. structs have padding

struct str{
  int a;
  char c;
}_str;//initialization of a struct
      
union uni{
  int a;
  char c;
}_uni;//initialization of a union 
      
int main(void){
  sizeof(_str);//returns 8 (with padding)
  sizeof(_uni);//returns 4
}
