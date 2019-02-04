#include <stdio.h>

// Non-Zero => error
#define EXIT_FAILURE 1
#define BUFF_SIZE 1024

int main(int argc, char const *argv[])
{
	const char *filename;

	// Check if two arguments are passsed
	if ( argc != 2 ) {
        fprintf(stderr, "usage: %s < path/to/filename >\n", argv[0]);
		return EXIT_FAILURE;
	}

	// Get the file form the commandline
	if ( (filename = argv[1]) < 0 ) {
		printf("Reading file Error\n");
		return EXIT_FAILURE;
	}
	
	// read a file from the provided path
	FILE *fp_input;
	FILE *fp_output;
	char buff[BUFF_SIZE];
	fp_input = fopen(filename, "r");
	fp_output = fopen("./output.txt","w"); // write the data to output file
	
	// read the file in BUFF_SIZE chunks
	while( fgets(buff, BUFF_SIZE - 1, fp_input)) {
		// decode & write to file
		fprintf(fp_output, "%s", encoder(buff) );
	}

	fclose(fp_input);
	fclose(fp_output);
	
	return 0;
}