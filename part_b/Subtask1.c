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
            print("Grand child");

            char * args[2] = {"./friend",NULL};		
            execvp(args[0],args);
        }

        else print("Child");
    }
    else print("perent");
return 1;
}








