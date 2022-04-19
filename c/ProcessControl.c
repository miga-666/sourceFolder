#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

int main() {
    pid_t pid;
    int ret;
    char command[100];

    printf("\n A simplified shell .. Enter exit to terminate!");
    /* a infinite loop */
    while (1) {
        printf("\n Joanna:$ ");
        scanf("%s", command); // input

    }

}