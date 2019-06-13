#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char** argv) {
  pid_t pid;

  printf("hola\n");
  pid = fork();
  printf("hola a todos\n");
  if (pid != 0) {
    printf("soy el padre mi id es %d y el de mi hijo es %d\n",getpid(),pid);
  } else {
    printf("soy el hijo con id %d y mi variable pid es %d\n",getpid(),pid);
  }

  return 0;
}
