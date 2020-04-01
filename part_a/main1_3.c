#include "hello_Ariel.h"
#include <stdio.h>
#include <stdbool.h>
#include <dlfcn.h>
#include <stddef.h>


void (*message)(const char*);

bool initLibrary()
{
    void *sdl_library = dlopen("./lib.so", RTLD_LAZY);
    if (sdl_library == NULL)
        return false;
    message = (void (*)(const char *))dlsym(sdl_library, "message");
    if (sdl_library == NULL)
        return false;
    else
    {
        return true;
    }
}
int main()
{
    if(initLibrary()){
        message("hello Ariel\n");
    }
    else{
     printf("Library was not loaded \n");   
    }
    return 0;
}
