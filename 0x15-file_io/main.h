#ifndef MAIN_H
#define MAIN_H
/**
 * struct copy_struct - struct for copy
 * @from: copy from file
 * @to: copy to file
 * @rd: read store
 * @wt: write store
 * @from_file: open from_file
 * @to_file: open of to_file
 * @buffer: buffer to read to file
 */
typedef struct copy_struct
{
	char *from;
	char *to;
	ssize_t rd;
	ssize_t wt;
	int from_file;
	int to_file;
	char *buffer;
} copy_struct;
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void from_to(copy_struct *cpy);
void file_copy(copy_struct *cpy);
void file_copy(copy_struct *cpy);
#endif
