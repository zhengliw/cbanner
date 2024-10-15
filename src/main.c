#include <stdio.h>
#include "draw.h"
int main (int argc, char * argv[]) {
	if (argc <= 1) {
		printf("Expected more than 1 argument, received %d\n", argc);
		return 1;
	}
	char * res_str = cb_generate(argv[1]);
	puts(res_str);
	free(res_str);
	return 0;
}
