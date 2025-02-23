#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <string.h>
#include <aio.h>

char * UseScanf() {

}

typedef struct {
	char *	buffer;
	size_t	buffer_length;
	ssize_t	input_length;
} InputBuffer;

InputBuffer * new_input_buffer() {
	InputBuffer input_buffer = (InputBuffer *)malloc(sizeof(InputBuffer);
	input_buffer->buffer = NULL;
	input_buffer->buffer_length = 0;
	input_buffer->input_length = 0;

	return input_buffer;
}
void print_prompt() { printf("db > "); }
void read_input(InputBuffer * inputBuffer) {
	ssize_t bytes_read = getline(&(inputBuffer->buffer), &(inputBuffer->buffer_length, stdin);
	
	if (bytes_read <= 0) {
		printf("error reading input\n");
		exit(EXIT_FAILURE);
	}

	inputBuffer->input_length = bytes_read - 1;
	inputBuffer->buffer[bytes_read - 1] = 0;

}
void close_input_buffer(InputBuffer * inputBuffer) {
	free(inputBuffer->buffer);
	free(inputBuffer);
}


int main() {

	typedef struct {
		uint32_t	id;
		char		date[11];
		float		rate;
	} UnemploymentRate;


	
	InputBuffer * input_buffer = new_input_buffer();
	while (true) {
		print_prompt();
		read_input(input_buffer);

		if (strcmp(input->buffer, ".exit") == 0 {
			close_input_buffer(input_buffer);
			exit(EXIT_SUCCESS);		
				
		} else {
			printf("unrecognized command");
		}
	
	}

	char * p;
	int n;

	puts("Hello World -db");
	
	errno = 0;

	n = scanf("%m[a-z]", &p);

	if (n==1) {
		printf("read: %s/n", p);
	} else if(errno != 0) {
		perror("scanf");
	} else {
		fprintf(stderr, "no matching characters.");
	}


	return EXIT_SUCCESS;
}
