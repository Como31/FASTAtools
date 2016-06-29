/*
** option_one.c for   in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 10:02:56 2016 courneil lucasc
** Last update Mon Jun 20 21:33:07 2016 courneil lucasc
*/

#include <stdio.h>
#include <string.h>
#include "my.h"

char	**transform_str(char **tab)
{
  char	**new;
  int	i = 0;
  int	j = 0;
  int	count = 0;

  while (tab[count])
    count++;
  new = my_malloc(sizeof(char *) * (count + 1));
  while (tab[i])
    {
      new[j] = my_malloc(sizeof(char) * 2048);
      if (strncmp(tab[i], ">", 1) == 0)
	new[j++] = tab[i++];
      new[j] = my_strcapitalize(tab[i]);
      i++;
      j++;
    }
  return (new);
}

void	option_one()
{
  char	*str = NULL;
  char	**new;
  char	**tab;
  int	i = 1;

  str = read_f();
  tab = my_strtowordtab(str);
  new = transform_str(tab);
  my_putstr(new[0]);
  my_putchar('\n');
  while (new[i])
    {
      if (strncmp(new[i], ">", 1) == 0)
	{
	  my_putchar('\n');
	  my_putstr(new[i]);
	  my_putchar('\n');
	}
      else
	my_putone(new[i]);
      i++;
    }
  my_putchar('\n');
}
