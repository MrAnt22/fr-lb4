#include <stdlib.h>
#include <stdio.h>

int main(){
	size_t big = (size_t)2*1024*1024*1024;
	void *ptr = malloc(big);

	if (ptr == NULL){
		perror("malloc failed");
	}
	else{
		printf("malloc succeeded");
		free(ptr);
	}

	return 0;
}
