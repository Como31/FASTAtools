/*
** check_option.c for  in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:59:54 2016 courneil lucasc
** Last update Tue Jun 21 18:31:22 2016 courneil lucasc
*/

#include <string.h>
#include <stdio.h>
#include "my.h"

void	check_option(char **av)
{
  if (av[1] && strcmp(av[1], "-h") == 0)
    puthelp();
  else
    {
      if (av[1] && strcmp(av[1], "1") == 0)
	option_one();
      else if (av[1] && strcmp(av[1], "2") == 0)
	option_two();
      else if (av[1] && strcmp(av[1], "3") == 0)
	option_three();
      else if (av[1] && strcmp(av[1], "4") == 0)
	my_exit("ok");
      else if (av[1] && strcmp(av[1], "5") == 0)
	option_five();
      else if (av[1] && strcmp(av[1], "6") == 0)
	option_six();
      else
	my_exit("Invalid arguments, type -h\n");
    }
}
