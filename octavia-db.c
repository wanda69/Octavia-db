#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "table.h"
#include <string.h>

// compare to api??

#define MAX 1000

typedef struct {
	char * meta;	// enum pointer?
	char * value;
	struct TextNode * next;
} TextNode;

TextNode * StartText(TextNode * head, char * meta, char * value) {	// 8 out of 10
	TextNode * new_node = malloc(sizeof(TextNode));
	
	new_node->meta = meta;
	new_node->value = value;
	new_node->next = NULL;

	// in case the list is empty
	if (head->next == NULL)
		return new_node;


	// preserve head
	TextNode * current = head;
	while (current->next != NULL) {
		current = current->next;
	}

	current->next = new_node;

	return head;
}

void ShowText(TextNode * head) {
	TextNode * current = head;

	for (current; current != NULL; current=current->next) {
		printf("%s\t", current->value);
	}
	printf("\n");
}

void Prompt() { printf("Octavia-db < "); }

typedef struct {
	char * buffer;
} Buffer;

/*enum META_STRINGS {
	exit,
	insert,
	delete,
	select
}*/
#define META_STRINGS_LENGTH 4

int CompareMetaString(char * text) {
	// best practices for an input chain... nodes?
}


//OBSERVATION THEORY
//******************

//OBSTRUCTION THEORY
#define NEGATIVE_PATTERN 0
//******************




int main() {

	// ** do 3 commands

	Buffer * buffer = malloc(256);

	Prompt();
	scanf("%m[a-z]", &buffer->buffer);
	
	TextNode * text_node = malloc(sizeof(TextNode));

	text_node = StartText(text_node, buffer->buffer, NULL);
	
	char * cmd = text_node->meta;

	printf("%s\n", cmd);

	memset(buffer->buffer, 0, sizeof(buffer->buffer));

	Prompt();
	scanf("%m[0-999]", &buffer->buffer);

	text_node = StartText(text_node, NULL, buffer->buffer);

	ShowText(text_node);

	memset(buffer->buffer, 0, sizeof(buffer->buffer));

	Prompt();
	scanf("%m[a-z]", &buffer->buffer);

	text_node = StartText(text_node, NULL, buffer->buffer);

	ShowText(text_node);

	// **
	




	// STORE DATA -->
	





	// FREQUENT DATA -->


	while (true) {

		double[] rate = [4.2,4.1,3.6,3.5];
		TIMESTAMP[] time = [];


	

		//parse data first and then mass insert? or single insert?
	





		BUILD_PROCESS(); // add all data to the application

	}

	return EXIT_SUCCESS;
}
