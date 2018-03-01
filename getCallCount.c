#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char **argv){
  printf(1,"write : %d\n", getCallCount(SYS_write));
  printf(1,"write : %d\n", getCallCount(SYS_write));

  return 0;
}
