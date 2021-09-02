#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>


int main(int argc, char *argv[]){

 FILE *f = open("./random_file.txt", O_RDWR);

 int rc = fork();

 if (rc == 0){
    
    printf("message from the child: my file is \n", f);

 }else{
    wait(NULL);
    printf("message from the parent: my file is \n", f);

}


}
