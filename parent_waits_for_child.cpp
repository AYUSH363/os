#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        std::cout << "Child process executing its task." << std::endl;
    } else if (child_pid > 0) {
        std::cout << "Parent process waiting for the child to finish." << std::endl;
        wait(NULL); // Wait for the child process to finish
        std::cout << "Child process has finished, and the parent continues." << std::endl;
    } else {
        perror("fork");
        return 1;
    }

    return 0;
}
