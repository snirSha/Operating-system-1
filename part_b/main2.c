#include "part_b.h"
#include <stdio.h>

int main()
{
    printf("********Clone :*********\n");
    ourClone();

    printf("********Daemon :********\n");
    ourDaemon();

    printf("********Fork :*********\n");
    ourFork();

    return 0;
}
