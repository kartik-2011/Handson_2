/*
========================================================================================================
Name : Q20.c
Author :  Raghav Goyal    
Description : Write two programs so that both can communicate by FIFO - Use one way communication.
Date: 30 sept, 2025.
========================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

int main() {

    char *buf = "Hello from Writer via FIFO\0";

    mkfifo("myfifo", 0666);

    int fd = open("myfifo", O_WRONLY);

    write(fd, buf, strlen(buf));

    printf("Message sent to FIFO by writer\n");

    close(fd);
    return 0;
}