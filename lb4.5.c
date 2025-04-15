#include <stdlib.h>
#include <stdio.h>

int main(){
	size_t init_size = 1024;
	void *ptr = malloc(init_size);
	if (!ptr){
		perror("malloc");
		return 1;
	}

	size_t new_size = (size_t)3 * 1024 * 1024 * 1024UL;
	void *new_ptr = realloc(ptr, new_size);

	if (!new_ptr){
		printf("realloc failed\n");
		free(ptr);
		return 1;
	}

	printf("realloc succeeded, new ptr = %p\n", new_ptr);
	free(new_ptr);
	return 0;
}
