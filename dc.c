#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Delay in seconds
void delay(int delay) {
    //ms to s
    delay += 1000;
    int ms = 1000 * delay;
    clock_t start = clock();
    while (clock() < start + ms);
}

int main(void) {
    //Disable CTRL+C
    signal(SIGINT, SIG_IGN);

    system("echo You fool!");
    // Countdown to extinction
    for (int i = 5; i >= 0; i--) {
        char msg[30] = "echo ";
        char s_i[5];
        snprintf(s_i, 10, "%d", i );
        strcat(msg, s_i);
        system(msg);
        delay(1);
    }
    return 0;
}