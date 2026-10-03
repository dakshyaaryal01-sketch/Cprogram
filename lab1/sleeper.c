#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Process running, PID = %d\n", getpid());
    sleep(30);
    return 0;
}

