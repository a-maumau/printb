#include "printb.h"

int main(void)
{
	int i;
	for(i=0; i <= 1000000; i++){
		print_bar(i, 1000000, 60, "[", "]", "=", ">", " downloading...", 0);
		//printb(i, 1000000, 60, " testing...");
	}

	return 0;
}