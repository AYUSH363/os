#include <iostream>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        // child process
        std::cout << "child process" << std::endl;
    } else if (child_pid > 0) {
        // parent process
        std::cout << "parent process" << std::endl;
    } else {
        // fork failed
        perror("fork");
        return 1;
    }

    return 0;
}
