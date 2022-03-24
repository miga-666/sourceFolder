#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int value = 3;
void *start(void *param)
{
    value++;
    printf("(a) %d ", value);
    pthread_exit(0);
}
int main(int argc, char *argv[])
{
    pthread_t tid;
    pthread_attr_t attr;
    value++;
    printf("(b) %d ", value); 
    pthread_attr_init(&attr);
    value++; 

    pthread_create(&tid, &attr, start, NULL);
    pthread_join(tid, NULL);
    value++; 
    printf("(c) %d ", value);
}