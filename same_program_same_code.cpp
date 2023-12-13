#include <iostream>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        std::cout << "Child process executing the same program with the same code." << std::endl;
    } else if (child_pid > 0) {
        std::cout << "Parent process executing the same program with the same code." << std::endl;
    } else {
        perror("fork");
        return 1;
    }

    return 0;
}
