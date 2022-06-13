#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void _putchar(int c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);

/**
 * prints a string, followed by a new line, to stdout
 */
void _puts(char *s);

/**
 * prints a string, in reverse
 */
void print_rev(char *s);

/**
 * this function reverses a string
 */
void rev_string(char *s);

/**
 * prints every other character of a string, from the first
 */
void puts2(char *str);


void puts_half(char *str);


void print_array(int *a, int n);


char *_strcpy(char *dest, char *src);


int _atoi(char *s);

#endif
