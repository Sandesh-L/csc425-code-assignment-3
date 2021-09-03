#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){

 int rc = fork();

 if (rc==0){
    int y = wait(NULL);
    printf("the child just waited on  %d \n", y);

 }else{
    int x = wait(NULL);
    printf("the child is: %i \n", x);
 }

 return 0;
}


/* wait(NULL) returns the process id of the child, using wait inside the 
child when that child doesn't have offsprings gives a -1 error code
*/
