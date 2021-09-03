#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){

  int rc = fork();

  if (rc == 0){
     printf("I am a child with no purpose \n");

  }else{
     int x = waitpid(rc, NULL, 0);
     printf("The child should be done running now %i \n", x);
  }


  return 0;
}


/*
Question 6: waitpid() would be useful when a parent has multiple children and needs to get data from a specific one.
*/
