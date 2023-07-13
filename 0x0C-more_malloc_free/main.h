#ifndef main_h
#define main_h

char _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int find_len(char *str);
char *create_xarray(int size);

#endif
