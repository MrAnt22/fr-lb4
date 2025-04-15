#include <stdio.h>
#include <stdlib.h>

int main(){
	void *ptr = NULL;

	printf("realloc(NULL,100):\n");
	ptr = realloc(NULL,100);
	if(ptr != NULL){
		printf("realloc(NULL,100) succeeded: %p\n",ptr);
	}

	printf("realloc(ptr,0):\n");
	void *newptr = realloc(ptr,0);
	if (newptr == NULL){
		printf("realloc(ptr,0) returned NULL)\n");
	}
	else{
		printf("realloc(ptr,0) returned non-NULL\n");
		free(newptr);
	}

	printf("realloc(NULL,0):\n");
	void *zero_ptr = realloc(NULL,0);
	if (zero_ptr == NULL){
		printf("realloc(NULL,0) return NULL");
	}
	return 0;
}



