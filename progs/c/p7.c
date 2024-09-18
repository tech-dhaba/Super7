//serializing and deserializing a struct
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

struct buf
{
  char name[10];
  int age;
  char desc[20];
};

int main(int argc, char *argv[])
{
  struct buf buf = {"John", 97, "Hello"};

  int fd = open(argv[1], O_CREAT | O_TRUNC | O_RDWR,0644);
  if (fd == -1)
  {
    perror("open");
    return 1;
  }
  printf("%lu\n",sizeof(buf));
  write(fd, &buf, sizeof(buf));
  read(fd, &buf, sizeof(buf));
  write(1, &buf, sizeof(buf));
  write(1, &(buf.age), 4);
  
  close(fd);
  return 0;
}
