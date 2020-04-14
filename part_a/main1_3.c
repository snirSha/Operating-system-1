#include <stdio.h>
#include <stdbool.h>
#include <dlfcn.h>
#include <stddef.h>


void (*message)(const char*);

bool initLibrary()//Dynamic library loading
{
    void *hdl_library = dlopen("./lib.so", RTLD_LAZY);//Open our library and get an handler
    if (hdl_library == NULL)
        return false;
    message = (void (*)(const char *))dlsym(hdl_library, "sayHello");//Find this function
    if (message == NULL)
        return false;
    else
    {
        return true;//Success
    }
}
int main()
{
    if(initLibrary()){//If the library was found-- print the message
        message("hello Ariel\n");
    }
    else{
     printf("Library was not loaded \n");   
    }
    return 0;
}
