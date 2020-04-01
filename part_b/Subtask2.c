#define _GNU_SOURCE
#include "part_b.h"
#include <stdio.h>
#include <sched.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK_SIZE 10000
#define CYCLES 1000
#define ONE_SECOND 1000000
char childStack[STACK_SIZE+1];

void print(const char *text){

   for(int i=0; i<CYCLES; i++){
      printf("Hello from %s\n", text);
      usleep(ONE_SECOND);
   }
}
int child(void *params){
   print("Child thread");
}
int main(){

   //int ans = clone(child, childStack+STACK_SIZE,0,0);
   //int ans = clone(child, childStack+STACK_SIZE,CLONE_PARENT,0);
   printf("clone ans = %d\n", ans);

   printf("Parent");

   return 0;
}
