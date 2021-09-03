#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){

 int rc = fork();

 if (rc==0){

    printf("child: I have something very important to tell you!! \n");

    fclose(stdout);
    printf("Can I print plesase? \n");


 }else{
    wait(NULL);
    printf("parent: finally some peace and quiet \n");
 }

 return 0;

}
/*

Question 7: The printf statement will have no effect. Nothing is printed.
*/
