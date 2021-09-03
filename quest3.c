#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <assert.h>


int main(int argc, char *argv[]){

 int rc = fork();

 if (rc == 0){
    printf("hello \n");

 }else{
    int x = 5000000;
    while (x!=0){
     x = x-1;
    }
    printf("goodbye\n");
 }

}

/*
question 3: looks like it. I just looped its until (I think) its time slice ran out.
*/
