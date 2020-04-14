#define _GNU_SOURCE
#include "part_b.h"
#include <stdio.h>
#include <sched.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK_SIZE 10000
#define CYCLES 10
#define ONE_SECOND 1000000
char childStack[STACK_SIZE+1];

void print(const char *text){//The function fork and clone processes are using

   for(int i=0; i<CYCLES; i++){
      printf("Hello from %s\n", text);//A simple function that prints 10 times "Hello" message
      usleep(ONE_SECOND);
   }
}

int child(void *params){//A simple function to distinguish between the child and the parent thread
   print("Child thread");
}

int ourClone(){

   int ans = clone(child, childStack+STACK_SIZE,CLONE_PARENT,0);// run "child" in "childStack"'s size and clone parent
   printf("clone ans = %d\n", ans);

   print("Parent");

   return 1;
}
