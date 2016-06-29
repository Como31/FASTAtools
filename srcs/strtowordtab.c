
/*
** requirement.c for   in /home/courne_l/rendu/synthese/smbl
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 13 09:23:32 2016 courneil lucasc
** Last update Mon Jun 20 18:39:51 2016 courneil lucasc
*/

#include <stdlib.h>

int	is_alnum(char c)
{
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	  || (c >= '0' && c <= '9') || c == '>' || c == '|'
	  || c == '<' || c == ' ');
}

int	word_size(char *str, int j)
{
  int	i;

  i = 0;
  while (str[j])
    {
      if (is_alnum(str[j]) == 0)
	return (i);
      j++;
      i++;
    }
  return (i);
}

int	count_words(char *str)
{
  int	i;
  int	words;

  i = 0;
  words = 1;
  while (str[i] && str[i + 1])
    {
      if (is_alnum(str[i]) == 0 && is_alnum(str[i + 1]) == 1)
	words++;
      i++;
    }
  return (words);
}

char    **my_strtowordtab(char *str)
{
  int	i = 0;
  int	j = 0;
  int	k;
  int	size_w = 0;
  char	**tab;


  if (!str)
    return (NULL);
  if (!(tab = malloc(sizeof(char *) * (count_words(str) + 3))))
    return (NULL);
  while (str[i])
    {
      size_w = word_size(str, i);
      if (!(tab[j] = malloc(sizeof(char) * (size_w + 1))))
	return (NULL);
      k = 0;
      while (str[i] && is_alnum(str[i]) == 1)
	tab[j][k++] = str[i++];
      if (size_w != 0)
	tab[j++][k] = '\0';
      while (str[i] && is_alnum(str[i]) == 0)
	i++;
    }
  tab[j] = NULL;
  return (tab);
}
