/*Discuss the use of file handling functions in C. How are files opened, read, written, and closed? Provide examples.*/

//in C we use open, read, write and close to perform file handling. open returns a file descriptor.

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(void){
  int fd=open("./q1.c",O_RDWR);//opening file q1.c in read and write mode
  char buff[512]={0};
  read(fd,buff,511);//reads first 511 bytes in memory
  write(fd,buff,511);//writes 511 bytes to file from buff
  close(fd);
}
  


