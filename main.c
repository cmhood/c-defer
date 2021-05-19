#include <stdio.h>
#include <stdlib.h>
#include "defer.h"

int
main(void)
{
	defer {
		printf("First deferral\n");
	}
	defer {
		printf("Second deferral\n");
	}
	printf("Normal print statement\n");
	return EXIT_SUCCESS;
}
