#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdlib.h>
#include <stdio.h>

void beezero(void *s, size_t len);
char *_memset(char *s, char b, unsigned int n);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int arg_check(char *s1, char *s2, char *s3, unsigned int n);

#endif
