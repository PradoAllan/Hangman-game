#ifndef HANGMAN_H
# define HANGMAN_H

# include "./libftsrc/libft.h"
# include <stdlib.h>
# include <stdio.h>

struct player
{
	char *name;
	int lifes;
	char guess;
	char *word;
	char *hidenword;
	char tried[26];
};

#endif
