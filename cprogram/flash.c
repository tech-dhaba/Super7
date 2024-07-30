#include<stdio.h>
#include<stdint.h>
#include<unistd.h>

int main(){
while(1){
printf("\033]11;#00FFFF\007");
sleep(2);
printf("\033]11;#0000FF\007");
sleep(2);
printf("\033]11;#ff0000\007");
sleep(2);
printf("\033]11;#00AFFF\007");
sleep(2);
}
}

