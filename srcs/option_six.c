/*
** option_four.c for  in /home/courne_l/rendu/synthese/FASTAtools
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Tue Jun 21 13:31:13 2016 courneil lucasc
** Last update Tue Jun 21 19:16:52 2016 courneil lucasc
*/

#include <unistd.h>
#include <string.h>
#include "my.h"

void    check_tag3(char *str)
{
  if (strncmp(str, "N", 1) == 0)
    my_putchar('X');
  else if (strncmp(str, "TAT", 3) == 0 || strncmp(str, "TAC", 3) == 0)
    my_putchar('Y');
  else
    return ;
}

void	check_tag(char *str)
{
  if (strncmp(str, "GCT", 3) == 0 || strncmp(str, "GCC", 3) == 0
      || strncmp(str, "GCA", 3) == 0 || strncmp(str, "GCG", 3) == 0)
    my_putchar('A');
  else if (strncmp(str, "TGT", 3) == 0 || strncmp(str, "TGC", 3) == 0)
    my_putchar('C');
  else if (strncmp(str, "GAT", 3) == 0 || strncmp(str, "GAC", 3) == 0)
    my_putchar('D');
  else if (strncmp(str, "GAA", 3) == 0 || strncmp(str, "GAG", 3) == 0)
    my_putchar('E');
  else if (strncmp(str, "TTT", 3) == 0 || strncmp(str, "TTC", 3) == 0)
    my_putchar('F');
  else if (strncmp(str, "GGT", 3) == 0 || strncmp(str, "GGC", 3) == 0
      || strncmp(str, "GGA", 3) == 0 || strncmp(str, "GGG", 3) == 0)
    my_putchar('G');
  else if (strncmp(str, "CAT", 3) == 0 || strncmp(str, "CAC", 3) == 0)
    my_putchar('H');
  else if (strncmp(str, "ATT", 3) == 0 || strncmp(str, "ATC", 3) == 0
      || strncmp(str, "ATA", 3) == 0)
    my_putchar('I');
  else if (strncmp(str, "AAA", 3) == 0 || strncmp(str, "AAG", 3) == 0)
    my_putchar('K');
  else if (strncmp(str, "TTA", 3) == 0 || strncmp(str, "TTG", 3) == 0
      || strncmp(str, "CTT", 3) == 0 || strncmp(str, "CTC", 3) == 0
      || strncmp(str, "CTA", 3) == 0 || strncmp(str, "CTG", 3) == 0)
    my_putchar('L');
  else
    check_tag2(str);
}

void	check_tag2(char *str)
{
  if (strncmp(str, "ATG", 3) == 0)
    my_putchar('M');
  else if (strncmp(str, "AAT", 3) == 0 || strncmp(str, "AAC", 3) == 0)
    my_putchar('N');
  else if (strncmp(str, "CCT", 3) == 0 || strncmp(str, "CCC", 3) == 0
      || strncmp(str, "CCA", 3) == 0 || strncmp(str, "CCG", 3) == 0)
    my_putchar('P');
  else if (strncmp(str, "CAA", 3) == 0 || strncmp(str, "CAG", 3) == 0)
    my_putchar('Q');
  else if (strncmp(str, "AGA", 3) == 0 || strncmp(str, "AGG", 3) == 0
      || strncmp(str, "CGT", 3) == 0 || strncmp(str, "CGC", 3) == 0
      || strncmp(str, "CGA", 3) == 0 || strncmp(str, "CGG", 3) == 0)
    my_putchar('R');
  else if (strncmp(str, "TCT", 3) == 0 || strncmp(str, "TCC", 3) == 0
      || strncmp(str, "TCA", 3) == 0 || strncmp(str, "TCG", 3) == 0
      || strncmp(str, "AGT", 3) == 0 || strncmp(str, "AGC", 3) == 0)
    my_putchar('S');
  else if (strncmp(str, "ACT", 3) == 0 || strncmp(str, "ACC", 3) == 0
      || strncmp(str, "ACA", 3) == 0 || strncmp(str, "ACG", 3) == 0)
    my_putchar('T');
  else if (strncmp(str, "GTT", 3) == 0 || strncmp(str, "GTC", 3) == 0
      || strncmp(str, "GTA", 3) == 0 || strncmp(str, "GTG", 3) == 0)
    my_putchar('V');
  else if (strncmp(str, "TGG", 3) == 0)
    my_putchar('W');
  else
    check_tag3(str);
}

void	bouclefdp(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      check_tag(str);
      i++;
    }
}

void	option_six()
{
  char	*str;
  char	**new;
  char	**tab;
  int	i = 1;

  str = read_f();
  tab = my_strtowordtab(str);
  new = transform_str(tab);
  while (new[i])
    {
      if (strncmp(new[i], ">", 1) == 0)
	i++;
      else
	bouclefdp(str);
      i++;
    }
}
