#ifndef LIB1_H
#define LIB1_H


char *read_file_to_buffer (char *file_path, unsigned int *file_size);
void free_buffer_mem(char *b);
void write_dArray_to_file (const double *arr, unsigned int len, const char *path);

#endif

