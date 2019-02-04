#include <stdio.h>
#include <string.h>
#include "_wordcount_h"

struct nodeSymbol 
{
	char* word[MAXWOrDSIZE];
	char symbol;
	struct nodeSymbol* next;
}

struct nodeSymbol *encode(struct note *swl);
