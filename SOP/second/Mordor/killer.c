//'killer.c' - usuwanie innych procesów
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

int main (void) {
   pid_t child;
   int status, retval;
   
   if((child = fork()) < 0) {
      perror("fork");
      exit(EXIT_FAILURE); }
   if(child == 0){
      sleep(1000);
      exit(EXIT_SUCCESS);
   } else {
      if((waitpid(child, &status, WNOHANG)) ==  0) {
         retval = kill(child, SIGKILL);
      if(retval) {
         puts("kill failed\n");
         perror("kill");
         waitpid(child, &status, 0);
      } else
         printf("child killed\n", child); 
      }
     }
    exit(EXIT_SUCCESS);
}
