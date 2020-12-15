#ifndef _wordcount_h
#define _wordcount_h

#define MAXWORDSIZE	50;

struct node *sorted_word_list(char *string);
struct node *next(struct node *swl);
char *get_word_head(struct node *swl);
int get_frequency_head(struct node *swl);

#endif
