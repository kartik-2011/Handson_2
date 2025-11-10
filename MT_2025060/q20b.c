/*
========================================================================================================
Name : Q20.c
Author :  Kartik Ahluwalia    
Description : Write two programs so that both can communicate by FIFO - Use one way communication.
Date: 30 sept, 2025.
========================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main() {
    char buf[100];

 
    int fd = open("myfifo", O_RDONLY);

    read(fd, buf, sizeof(buf));

    printf("%s\n", buf);

    close(fd);
    return 0;
}