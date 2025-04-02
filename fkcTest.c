#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char * argv[])
{

    printf(0, "number of forks when program starts: %d\n", fkc(1));
    int pid = fork();
    if (pid == 0) {
        exit();
    }
    pid = fork();
    if (pid == 0) {
        exit();
    }
    wait();
    wait();
    printf(0, "number of forks after two more forks: %d\n", fkc(1));
    
    //printf(0, "number of forks after two more forks: %d\n", fkc(1));
    //printf(0, "number of forks after fork count cleared: %d\n", fkc(0));

    //printf(0, "number of forks after three more forks: %d\n", fkc(1));
    exit();
}