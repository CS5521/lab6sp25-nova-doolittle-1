#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char * argv[])
{
    printf(0, "number of forks since last call: %d\n", fkc());
    exit();
}