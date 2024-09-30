#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

// Delay in seconds
void delay(int delay)
{
    int milli_seconds = 1000 * delay;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

int main(void) {
    system("echo You fool!");
    for (unsigned int i = 1; i <= 5; i++)
    {
        delay(1000);
        char msg[30] = "echo ";
        char s_i[5];
        //itoa(i, s_i, 10);
        snprintf(s_i, 10, "%d", i );
        strcat(msg, s_i);
        system(msg);
    }
    
    return 0;
}