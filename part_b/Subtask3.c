#include "part_b.h"
#include <stdio.h>
#include <syslog.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define THREE_SECOND 3000000

int ourDaemon(){

    pid_t pid = fork();

    if(pid == 0){//Child

    //Move the root dir, used to not block the file system.
    chdir("/");

    //Move the child to another session, so the parent may be closed.
    setsid();

    printf("Daemon is running\n");

    //Close output chanels
    fclose(stdout);
    fclose(stdin);
    fclose(stderr);

    //Open log
    openlog("Daemon\n", LOG_PID, LOG_DAEMON);
    syslog(LOG_NOTICE, "Daemon started\n");
    usleep(THREE_SECOND);
    syslog(LOG_NOTICE, "Daemon working...\n");
    usleep(THREE_SECOND);
    syslog(LOG_NOTICE, "Daemon finished\n");


    }
    else printf("Daemon PID %d\n", pid);

   return 1;
}
