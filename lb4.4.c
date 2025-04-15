#include <stdlib.h>
#include <stdio.h>

int main(){
	void *ptr = NULL;
	int i = 0;
	while (i<3){
		ptr = malloc(100);
		if (!ptr){
			perror("malloc");
			exit(1);
		}
		printf("Iteration %d: ptr = %p\n",i ,ptr);
		free(ptr);
		i++;
	}
	return 0;
}
