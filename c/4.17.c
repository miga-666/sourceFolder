#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void* run(void* param) {
    
    printf("run \n");
    pthread_exit(NULL);
}

int main(int argc, char *param) 
{
    pid_t pid;
    pthread_t tid;
    // pthread_attr_t attr;


    pid = fork();
    if(pid == 0) { /*child process*/
        fork();
        pthread_create(&tid, NULL, run, NULL);
        pthread_join(tid, NULL);

        printf("child \n");
    }
    fork();
    printf("parent \n");
    wait(NULL);
} 