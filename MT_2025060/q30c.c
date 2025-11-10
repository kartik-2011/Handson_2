

/*
========================================================================================================
Name : Q30c.c
Author : Kartik Ahluwalia 
Description : Write a program to create a shared memory.
		c. Detach the shared memory.
Date: 29 Sept, 2025.
========================================================================================================
*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>

int main()
{
    key_t key = ftok(".", 'a');
    int shmid = shmget(key, 1024, IPC_CREAT | 0666);

    char *data = shmat(shmid, (void *)0, 0);
    printf("Detachment Successful\n");
    shmdt(data);

    return (0);
}
/*
kartikahluwalia@Administrators-MacBook-Pro handson2 % gcc q30c.c -o q30c
kartikahluwalia@Administrators-MacBook-Pro handson2 % ./q30c            
Detachment Successful
*/