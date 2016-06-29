/*
** my_putchar.c for  in /home/courne_l/rendu/synthese/FASTAtools/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:52:49 2016 courneil lucasc
** Last update Mon Jun 20 09:53:28 2016 courneil lucasc
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putcharf(char c)
{
  write (2, &c, 1);
}
