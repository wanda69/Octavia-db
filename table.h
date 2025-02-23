typedef struct {
	char * ColumnName;
	void * value;
	size_t size;
} Column;


#define MAX_COLUMNS 3
typedef struct {
	uint32_t id;
	struct Column columns[MAX_COLUMNS];
	size_t Count;
} Row;

typedef struct {
	struct Row * rows[TABLE_MAX_ROWS];
	size_t RowCount;
} Table;

void AddSpace() { //... frequents the operation - concurrent
	// Every time the buffer attempts to frequent memory, its operating.
	
	


}
Table * Plot();


void Reveal() {
	
	//if (NEGATION_PATTERN)
				// post

}
