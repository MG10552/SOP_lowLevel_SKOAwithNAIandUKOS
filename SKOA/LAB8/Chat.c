#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void odbieradlo(char *fifoname)
{
int status;
printf("Odbieram wiadomości\n");

wait(status);
printf("Zakończono\n");
}

void wysylando(char *fifoname)
{
printf("Wysyłam wiadomości\n");

}

int main (int argc, char **argv)
{
int pid = fork();
char fifoname[] = "./kolejka"
if mkfifo("./fifo",0600) == -1){ perror("tworzenie kolejki fifo");
exit(1);

if (pid == 0)
{wysylando("");} else {odbieradlo();}

remove(pathname);
//system("rm -f ./kolejka");

return 0;
}
