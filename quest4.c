#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>


int main(int argc, char *argv[]){

 int rc = fork();

 if (rc == 0){
    char *myargs[3];
    myargs[0] = strdup("/bin/ls");
    myargs[1] = strdup("quest4.c");
    myargs[2] = NULL;
    execvp (myargs[0], myargs);
}

}

/*
Question4: The reason there are so many different versions of the same function takes in different parameters.
*/
