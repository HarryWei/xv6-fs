#include "types.h"
#include "stat.h"
#include "user.h"



int
main(int argc, char *argv[])
{
  int partition_number;
  int mount_res = -1;

  if(argc == 2){
    printf(1, "should test with cd that kernel finds correct partition and path NOT IMPLEMNTED YET\n");

  }
  else if(argc < 3){
    printf(1, "usage: mount path partition_number\n");
    exit();
  }

  partition_number = atoi(argv[2]);

  printf(1, "trying to mount path: %s, in partition: %d\n",argv[1],partition_number);
  mount_res = mount(argv[1],partition_number);
  if(mount_res == 0){
     printf(1, "mount succeded!!!\n");
  }
  else{
    printf(1, "mount FAILURE!!!\n");
    exit();
  }
  exit();
}
