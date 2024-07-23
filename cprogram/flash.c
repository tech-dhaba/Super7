#include<stdio.h>
#include<stdint.h>
#include<unistd.h>

int main(){
while(1){
usleep(2000);
printf("\033]11;#00FFFF\007");
printf("\033]11;#0000FF\007");
}
}

