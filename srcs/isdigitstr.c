/*
** isdigitstr.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Thu Jun 16 15:02:42 2016 courneil lucasc
** Last update Thu Jun 16 15:05:41 2016 courneil lucasc
*/

int	isdigitstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
      i++;
    }
  return (1);
}
