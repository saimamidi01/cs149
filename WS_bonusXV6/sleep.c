#include "kernel/types.h"
#include "kernel/stat.h"
// this has the header function to use sleep.
#include "user/user.h"
int main(int argc, char * argv[]) {
    // getting the user input.
   if(argc >= 2) {
      int ticks = atoi(argv[1]);
      // the assembler program usys.S will call the kernel sys sleep.
      return sleep(ticks);
   }
   else {
     // in case of error.
     printf("please input ticks\n");
     return 1;
   }
}