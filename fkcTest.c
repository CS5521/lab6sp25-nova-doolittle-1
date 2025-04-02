#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char * argv[])
{
    int i;
    int pid;

    printf(0, "number of forks when program starts: %d\n", fkc(1));
    
    for (i = 0; i < 2; i++)
    {
        pid = fork();
        if (pid == 0) exit();
    }

    for (i = 0; i < 2; i++) {
        wait();
    }

    printf(0, "number of forks after two more forks: %d\n", fkc(1));
    
    printf(0, "number of forks after fork count cleared: %d\n", fkc(0));
    
    for (i = 0; i < 3; i++)
    {
        pid = fork();
        if (pid == 0) exit();
    }

    for (i = 0; i < 3; i++) {
        wait();
    }

    printf(0, "number of forks after three more forks: %d\n", fkc(1));
    exit();
}