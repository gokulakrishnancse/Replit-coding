#include <stdio.h>

int main(void) {
  
  int i,j;

	for (i=0; i<9; i+=2) {
		for (j=0; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
  
  return 0;
}