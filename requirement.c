/*
** requirement.c for   in /home/courne_l/rendu/synthese/FASTAtools
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:28:31 2016 courneil lucasc
** Last update Tue Jun 21 14:50:52 2016 courneil lucasc
*/

int	is_alnum(char c)
{
  if ((c < 'A' || c > 'Z') && (c < '0' || c > '9') && (c < 'a' || c > 'z'))
    return (1);
  return (0);
}

char	*my_strcapitalize_synthesis(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  if (i == 0 || is_alnum(str[i - 1]) == 1)
	    str[i] = str[i] - 32;
	  i++;
	}
      i++;
    }
  return (str);
}
