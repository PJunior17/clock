#include <stdio.h>

#define FONT_ROWS 5
#define FONT_COLS 3

int font[] = {31599};

void print(int ch) {
	for(int y = 0; y < FONT_ROWS; y++) {
		for(int x = 0; x < FONT_COLS; x++) {
			if((ch>>((FONT_ROWS - y - 1)*3 + (FONT_COLS - x - 1)))&1) { 
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main() {
	print(font[0]);

	return 0;
}

