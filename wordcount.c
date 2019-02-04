#include <stdio.h>
#include <stdlib.h>

#define MAXWORDSIZE	50

struct node
{
	char *word;
	int length;
	int frequency;
	struct node *next;
	struct node *prev;
};

int same_word(char *w1, char *w2)
{
	char *a = w1;
	char *b = w2;

	while(*a != '\0' && *b != '\0')
	{
		if (*a != *b) return 0;
	}

	if (*a == *b) return 1;
	return 0;
}

struct node *create_node(char *word, int length)
{
	struct node *N;

	N = malloc(sizeof(struct node));

	N->word = word;
	N->length = length;
	N->frequency = 1;
	N->next = NULL;
	N->prev = NULL;
}

struct node *sort(struct node *swl)
{
	struct node *head;
	struct node *tmp, tmp2, tmp2_prev;

	tmp = swl1->next;

	head = swl;
	head->next = NULL;

	while(tmp != NULL)
	{
		tmp2 = head;
		tmp2_prev = tmp2;

		while(tmp2 != NULL && tmp2->frequency > tmp->frequency)
		{
			tmp2_prev = tmp2;
			tmp2 = tmp2->next;
		}

		if (tmp2 == NULL)
		{
			tmp2_prev->next = tmp;
			tmp->prev = tmp2_prev;
			tmp2_prev->next->next = NULL;
			tmp = tmp->next;
		}
		else
		{
			
		}
	}


}

struct node *add_node(struct node *swl, char *word, int length)
{
	struct node *tmp, tmp_prev, new;

	if (swl == NULL)
	{
		return create_node(word, length);
	}

	tmp_prev = swl;
	tmp = swl;

	while(tmp != NULL)
	{
		if (same_word(tmp->word, word))
		{
			tmp->frequency++;
			return swl;
		}
		tmp_prev = tmp;
		tmp = tmp->next;
	}

	new = create_node(word, length);
	tmp_prev->next = new;
	new->prev = tmp_prev;
	return swl;

}

struct node *sorted_word_list(char *string)
{

	int length;
	struct node *swl, N;
	char *word;
	char *pt;
	char c;

	pt = string;
	swl = NULL;

	while(pt != NULL)
	{
		word = malloc(sizeof(char) * MAXWORDSIZE);
		length = 0;

		while(*pt != ' ' && *pt != '\n')
		{
			word[length] = *pt;
			length++;
			pt++;
		}

		word[length] = '\0';
		pt++;

		swl = add_node(swl, word, length);
	}

	return sort(swl);
}

struct node *next(struct node *swl)
{
	if (swl == NULL) return NULL;

	return swl->next;
}

char *get_word_head(struct node *swl)
{
	if (swl == NULL) return NULL;

	return swl->word;
}

int get_frequency_head(struct node *swl)
{
	if (swl == NULL) return -1;

	return swl->frequency;
}










