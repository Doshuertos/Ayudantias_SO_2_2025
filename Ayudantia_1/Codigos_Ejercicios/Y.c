#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

int main(){
    pid_t m,n;
    m = getpid();

    if(m%2 == 1) {
        exit(0);
    }else {
        n = fork();
        execlp("./X","",NULL);
    }
    return 0;
}