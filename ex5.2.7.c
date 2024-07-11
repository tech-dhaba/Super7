#include <stdio.h>

int main() {
  int num;
  int exceed=0;
  float fine;
  printf("\nBe aware! Speeding is heavily fined!");
  printf("\nspeed limit is:130!");
  printf("\nYour speed is:");
  scanf("%d",&num);
  int value;
  if(num>=130){
      value = 1;
      if(value ==1){
        exceed = (num - 130);
        value = 3;
        printf("\nYou have exceeded the limit by:%d km/h",exceed);
      }
      if(value ==3);
      fine = (exceed + 100+ 7.5);
      printf("\nYour Fine is:%f Rs",fine);
      
  }
  else if (num<130){
      printf("\n You are driving Accordingly");
  }

    return 0;
}
