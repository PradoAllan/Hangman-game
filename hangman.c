#include "hangman.h"

//Need to implement.
char	*getword()
{
	char *words[6] = { "gato", "bola", "tenis", "cachorro", "computador", "aviao" };
	int random = rand() % 3;

	return (words[random]);
}

void	status(struct player p)
{
	ft_putstr_fd("WORD: ->		", 1);
	ft_putendl_fd(p.hidenword, 1);
}

void	show_lifes(struct player p)
{
	ft_putstr_fd("LIFES: ->		", 1);
	ft_putnbr_fd(p.lifes, 1);
	ft_putchar_fd('\n', 1);
}

int	is_correct(struct player p)
{
	int i = 0;
	int changed = 0;

	while (p.word[i])
	{
		if (p.word[i] == p.guess)
		{
			p.hidenword[i] = p.guess;
			changed = 1;
		}
		i++;
	}
	return (changed);
}

void	game(struct player p)
{
	size_t word_len;

	word_len = ft_strlen((const char *)p.word);
	while (p.lifes && ft_strncmp(p.word, p.hidenword, word_len))
	{
		ft_putendl_fd("============================================================", 1);
		ft_putendl_fd("Type a letter:", 1);
		ft_putendl_fd("Then press ctrl+D. ˆD", 1);
		p.guess = getchar();
		ft_putchar_fd('\n', 1);
		if (is_correct(p))
		{
			ft_putendl_fd("Nice one! You got the right guess.", 1);
			status(p);
			show_lifes(p);
		}
		else
		{
			ft_putendl_fd("Wrong guess... Try again!", 1);
			p.lifes--;
			show_lifes(p);
			status(p);
		}
		ft_putendl_fd("============================================================", 1);
		ft_putchar_fd('\n', 1);
	}
	if (!p.lifes)
	{
		ft_putstr_fd("So close, ", 1);
		ft_putendl_fd(p.name, 1);
		ft_putendl_fd("You run out of tries... Good luck next time!", 1);
		ft_putchar_fd('\n', 1);
	}
	else
	{
		ft_putendl_fd("Congratulations!", 1);
		ft_putendl_fd(p.name, 1);
		ft_putendl_fd("You won the hangman game...", 1);
		ft_putchar_fd('\n', 1);
	}
}

//a.out playerName Lifes word
int	main(int ac, char **av)
{
	struct player p;

	if (ac != 4)
	{
		ft_putendl_fd("Invalid arguments.", 2);
		ft_putendl_fd("Follow these rules:\n ->PlayerName Lifes word to guess.", 2);
		return (0);
	}
	p.name = av[1];
	p.lifes = ft_atoi(av[2]);
	p.word = av[3];
	p.hidenword = ft_strdup(p.word);
	ft_memset(p.hidenword, '_', ft_strlen(p.hidenword));
	system("clear");
	game(p);
	return (1);
}
