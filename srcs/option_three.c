/*
** option_two.c for   in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 16:12:09 2016 courneil lucasc
** Last update Tue Jun 21 13:26:53 2016 courneil lucasc
*/

#include <stdio.h>
#include <string.h>
#include "my.h"

void	my_putthree(char *str)
{
  int	count;

  count = strlen(str) - 1;
  while (str[count])
    {
      if (str[count] == 'A')
	my_putchar('T');
      if (str[count] == 'T')
	my_putchar('A');
      if (str[count] == 'G')
	my_putchar('C');
      if (str[count] == 'C')
	my_putchar('G');
      count--;
    }
}

char	**tabcat(char **new)
{
  int	i = 0;
  int	j = 0;
  char	**transf;
  int	count = 0;

  while (new[count])
    count++;
  transf = my_malloc(sizeof(char *) * (count + 1));
  while (new[i] && new[i + 1])
    {
      transf[j] = my_malloc(sizeof(char) * 200);
      if (strncmp(new[i],">", 1) == 0)
	transf[j++] = new[i++];
      else if (strncmp(new[i + 1], ">", 1) == 0)
	transf[j] = strcat(new[i], new[i + 1]);
      i++;
      j++;
    }
  return (transf);
}

void	option_three()
{
  char	*str;
  char	**new;
  char	**tab;
  int	i = 1;

  str = read_f();
  tab = my_strtowordtab(str);
  new = transform_str(tab);
  my_putstr(new[0]);
  my_putchar('\n');
  while (new[i] && new[i + 1])
    {
     if (strncmp(new[i], ">", 1) == 0)
	{
	  my_putchar('\n');
	  my_putstr(new[i]);
	  my_putchar('\n');
	}
     else
       {
	 my_putthree(new[i]);
       }
     i++;
    }
    my_putchar('\n');
}
