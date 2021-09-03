#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>


int main(int argc, char *argv[]){

 int f = open("./random_file.txt", O_RDWR);

 int rc = fork();

 if (rc == 0){

    printf("message from the child: my file is %d \n", f);

 }else{
    wait(NULL);
    printf("message from the parent: my file is %d \n", f);

 }
}

/*
Both the child and the parent have access to the file. In the case where they are both writing to the file,
they would most likely write over eachother.
*/
