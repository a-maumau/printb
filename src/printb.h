#ifndef PRINTB
#define PRINTB

#include <stdio.h>

void print_bar(float current, float total, int bar_len, char *start_char, char *end_char, char *bar, char *bar_current, char *suffix, int flag_percent);

void printb(float current, float total, int bar_len, char *suffix);

#endif