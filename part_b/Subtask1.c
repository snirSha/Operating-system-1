#include "part_b.h"
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>


int ourFork(){
    pid_t pid;

    pid = fork();//Create child process 

    if(pid < 0){//Error - something went wrong
        fprintf(stderr, "Fork faild");
        return 1;
    }

    else if (pid == 0){//Success in making child process 

        pid_t pid = fork();//Create grand child process

        if(pid == 0) {//Success in making grand child process 
            print("Grand child");

            char * args[2] = {"./Subtask2.1",NULL};//File name and arguments		
            execvp(args[0],args);
	//The exec type system calls allow a process to run any program files

        } 
        else print("Child");//Done with grand child, now we in child process
    }
    else print("perent");//Done with child, now we in parent process

    
    return 0;
}







