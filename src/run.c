int run(char* fileName) {
	FILE* binFP;
	binFP = fopen(fileName, "rb");
	
	if (binFP != NULL) {
		
	} else {
		printf("\x1B[1;31mmhm8: run: file not found");
		fclose(binFP);
		return 404;
	}

	fclose(binFP);
	return 0;
}
