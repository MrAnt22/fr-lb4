#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sbar{
	int a;
	double b;
};

int main(){
	struct sbar *ptr, *newptr;

	ptr=calloc(1000, sizeof(struct sbar));
	if (!ptr){
		perror("calloc");
		return 1;
	}

	newptr = reallocarray(ptr, 500, sizeof(struct sbar));
	if (!newptr){
		perror("reallocarray failed");
		free(ptr);
		return 1;
	}

	printf("Reallocation successful: %p to %p\n", (void*)ptr, (void*)newptr);
	free(newptr);
	return 0;
}



