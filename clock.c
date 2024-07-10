#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	time_t seconds;
	time_t val = 1;
	struct tm* current_time;

	seconds = time(NULL);
	current_time = localtime(&seconds);

	printf("%02d:%02d:%02d\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
	
	return 0;
}

