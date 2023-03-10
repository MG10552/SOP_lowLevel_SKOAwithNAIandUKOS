#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/errno.h>


void my_sighandlerINT();
void my_sighandlerQUIT();

int main()
{
  int a=1;
  printf("PID procesu: %d\n\n",(int) getpid());

  printf("Program zignoruje sygnal (tam gdzie jest to mozliwe) \n");
  if (signal(SIGQUIT,SIG_IGN) == SIG_ERR){ 
     perror("Funkcja signal ma problem z SIGQUIT");
     exit(EXIT_FAILURE);
  }
  if (signal(SIGINT,SIG_IGN) == SIG_ERR){
     perror("Funkcja signal ma problem z SIGINT");
     exit(EXIT_FAILURE);
  }  
  if (signal(SIGUSR1,SIG_IGN) == SIG_ERR){
     perror("Funkcja signal ma problem z SIGUSR1");
     exit(EXIT_FAILURE);
  }
/*
  if (signal(SIGKILL,SIG_IGN) == SIG_ERR){
     perror("Funkcja signal ma problem z SIGKILL");
     exit(EXIT_FAILURE);
  }

  if (signal(SIGSTOP,SIG_IGN) == SIG_ERR){
     perror("Funkcja signal ma problem z SIGSTOP");
     exit(EXIT_FAILURE);
  }
*/
       if (pause() < 0){
         perror("ERROR: sygnal nie powoduje zakoczenia procesu");
         exit(EXIT_FAILURE);
       }
//       break;



  return 0;
}


