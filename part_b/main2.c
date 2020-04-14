#include "part_b.h"
#include <stdio.h>

int main()//A simple main function that calls subtask1, subtask2 and subtask3 in order 
{

    printf("********Fork :*********\n");
    ourFork();

    printf("********Clone :*********\n");
    ourClone();

    printf("********Daemon :********\n");
    ourDaemon();


    return 0;
}
