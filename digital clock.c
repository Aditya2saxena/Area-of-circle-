#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *localTime;

    while (1) {
        // Get current time
        currentTime = time(NULL);
        localTime = localtime(&currentTime);

        // Display digital clock
        printf("%02d:%02d:%02d\r", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

        // Optional: Add a delay for better visibility (requires <unistd.h>)
        // usleep(1000000); // 1 second delay
    }

    return 0;
}
