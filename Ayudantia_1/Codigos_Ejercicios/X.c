#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

inf main(){
    pid_t r,s,t,p;
    r = fork();
    s = fork();
    t = fork();
    p = getpid();
    printf("r: %d¨\n",r);
    printf("s: %d¨\n",s);
    printf("t: %d¨\n",t);

    if(p%2 == 0){
        exit(0)
    }else{
        execlp("./Y","",NULL);
    }
    return 0;
}