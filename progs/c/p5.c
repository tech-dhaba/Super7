#include<stdio.h>
#include"sv.h"

int main(){
  char *cstr1="shivam";
  char *cstr2="shiva";
  String_View s1= sv_from_cstr(cstr1);
  String_View s2= sv_from_cstr(cstr2);
  printf("%d",sv_starts_with(s1,s2));
  // printf(SV_Fmt,SV_Arg(s));
  return 0;
}
