#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main (int argc, char *argv[]){
    int x = 100;
    int rc = fork();
    if (rc == 0){ //not checking for error cuz im lazy and there prob wont be one
        printf("Hello, I am the child and my x is %i \n", x);
	x = 200;
	printf("new x for child: %i \n", x);

    }else{
	printf("Hello, I am the parent and my x is  %i \n", x);
	x = 0;
	printf("new x for parent: %i \n", x);
    }
    return 0;
}

/***
Question 1: The vaule of x in the child process is the same as it is in the parent processs
	    when the value of x gets changed in the child process, it doesn't affect the value of x
	    in the parent process and vice versa.
***/
