#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "run.c"
#include "assemble.c"

int main(int argc, char* argv[]) {
	if (argv[1] == 0) {
		printf("mhm8: no args specified\n\r");
		return 1;
	}
	if (strcmp(argv[1], "run") == 0) {
		if (argv[2] != 0) {
			return run(argv[2]);
		} else {
			printf("mhm8: run: no file specified\n\r");
			return 1;
		}
	} else if (strcmp(argv[1], "assemble") == 0) {
		return assemble(argv[2]);
	} else {
		printf("mhm8: %s is not a valid subcommand\n\r", argv[1]);
		return 1;
	}
	printf("\n\r");
	return 0;
}

