// File: linux-syscall.c
#include <unistd.h>   // For write
#include <string.h>   // For strlen

int main() {
    const char *message = "Hello from Linux syscall!\n";
    write(1, message, strlen(message)); // 1 = STDOUT
    return 0;
}
