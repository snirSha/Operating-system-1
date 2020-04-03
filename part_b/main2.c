#include "part_b.h"
#include <stdio.h>

int main()
{
printf("choose your preference: fork, clone, deamon or exit.\n");
        printf("F for Fork, C for clone, D for deamon and E for exit.\n");
    while (1)
    {
        char type;

        scanf(" %c", &type);
        switch (type)
        {
        case 'F':
            ourFork();
            break;

        case 'C':
            ourClone();
            break;

        case 'D':
            ourDeamon();

            break;

        case 'E': printf("bye bye\n");
            return 0;

        default: printf("Wrong value\n");
        }
    }
}
