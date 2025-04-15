#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("Sleeping 30 seconds");

	void *p1 = malloc(1024*1024);
	void *p2 = malloc(2*1024*1024);

	printf("p1 = %p, p2 = %p\n",p1,p2);
	sleep(30);

	free(p1);
	free(p2);

	return 0;
}
