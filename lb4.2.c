#include <stdlib.h>
#include <stdio.h>

int main(){
	int xa = 1 << 30;
	int xb = 4;

	int num = xa * xb;
	printf("xa = %d, xb = %d, xa*xb = %d\n", xa, xb, num);

	void *ptr = malloc(num);
	if (!ptr){
		perror("malloc failed");
	}
	else{
		printf("malloc succeeded\n");
		free(ptr);
	}
	return 0;
}
