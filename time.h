// TIME.h
// TIME is a data structure that is used in Octavia-db to sort elements
// using a bisectional-(split)-binary search method. It provides logical
// assemblance...

#include <time.h>

typedef struct {

	uint64_t timestamp;
} TimeStamp;

void * f(void * x); // input  f(x)

TimeStamp get_current_time();


int CompareTime(); // sequential idea... 

void Print(const TimeStamp* timeStamp);

// anytime we want to get a sequential idea we call the assembler.
time_t Assembler((f(x))) {

	time_t now;

	clock_t start, end;
	double cpu_time_used;

	start = clock();

	now = get_current_time(); // independent variable

	CompareTime((f(x)));

	// epoc, or elapsed, or period... - or + or what ever current time. 
	BUILD_PROCESS(); // obviously builds the linear curve. the process? --global--

	end = clock();

	cpu_time_used = (end-start) / CLOCKS_PER_SEC;
}
