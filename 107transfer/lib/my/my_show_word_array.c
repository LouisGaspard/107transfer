/*
** EPITECH PROJECT, 2017
** aff
** File description:
** tab
*/

#include "my.h"

int	my_show_word_array(char	* const * tab)
{
	int	i = 0;

	while (tab[i]) {
		my_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
