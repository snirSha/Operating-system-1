#include "part_b.h"
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int ourFork(){
    pid_t pid;

    pid = fork();

    if(pid < 0){//error
        fprintf(stderr, "Fork faild");
        return 1;
    }

    else if (pid == 0){ 

        pid_t pid = fork();
        if(pid == 0){
            printf("Grand child\n");

            char * args[2] = {"./friend",NULL};		
            execvp(args[0],args);
        }

    
        else printf("Child\n");
    }
    else printf("perent\n");
return 1;
}








