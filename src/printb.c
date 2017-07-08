#include "printb.h"

void print_bar(float current, float total, int bar_len, char *start_char, char *end_char, char *bar, char *bar_current, char *suffix, int flag_percent)
{
	int i;
	int fill;
	float percents;

	if(flag_percent){
		fill = bar_len*current/total;
		percents = 100.0*current/total;

		printf("%s", start_char);
		for(i=0; i < fill-1; i++){
			printf("%s", bar);
		}
		printf("%s", bar_current);
		i++;
		for(; i < bar_len;i++){
			putchar(' ');
		}
		if(current != total) printf("%s%3.1f%%%s\r", end_char, percents, suffix);
		else printf("%s%3.1f%%%s\n", end_char, percents, suffix);
	}else{
		fill = bar_len*current/total;

		printf("%s", start_char);
		for(i=0; i < fill-1; i++){
			printf("%s", bar);
		}
		printf("%s", bar_current);
		i++;
		for(; i < bar_len;i++){
			putchar(' ');
		}
		if(current != total) printf("%s%.0f\\%.0f%s\r", end_char, current, total, suffix);
		else printf("%s%.0f\\%.0f%s\n", end_char, current, total, suffix);
	}

	return ;
}

void printb(float current, float total, int bar_len, char *suffix)
{
	print_bar(current, total, bar_len, "[", "]", "#", "#", suffix, 1);

	return ;
}
