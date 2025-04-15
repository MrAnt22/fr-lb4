#include <stdlib.h>
#include <stdio.h>

int main(){
	void *ptr = malloc(0);
	if (ptr == NULL){
		printf("return NULL");
	}
	else{
		printf("return non-NULL pointer: %p\n", ptr);
		free(ptr);
	}
	return 0;
}
