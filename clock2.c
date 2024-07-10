#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	struct tm* ptr;
	time_t t;
	t = time(NULL);
	ptr = localtime(&t);
	printf("EST: %s\n", asctime(ptr));
	
	struct tm* gmt;
	time_t gmt_t;
	gmt_t = time(NULL);
	gmt = gmtime(&gmt_t);
	printf("GMT: %s\n", asctime(gmt));



	return 0;
}

