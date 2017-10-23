#include <unistd.h>
#include <fcntl.h>

struct record {
  int id;
  char name[80];
};

void main(void)
{

  int fd, size = sizeof(struct record);
  struct record info;

  fd = open("datafile", O_RDWR);  /* Open for read/write */

  lseek(fd, 5 * size, SEEK_SET); /* skip five records */
  read(fd, &info, size);         /* read record */

  info.id=99;  /* modify record */
  lseek(fd, -size, SEEK_CUR); /* backspace */
  write(fd, &info, size);  /* write modified record */

  close(fd);

}
