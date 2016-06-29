/*
** my.h for   in /home/courne_l/rendu/synthese/FASTAtools
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Mon Jun 20 09:38:58 2016 courneil lucasc
** Last update Tue Jun 21 19:04:08 2016 courneil lucasc
*/

#ifndef MY_H_
# define MY_H_

void	my_exit();
void	*my_malloc(unsigned int);
void	puthelp();
void	my_putstr(char *);
void	my_putstrf(char *);
void	my_putone(char *);
void	check_option(char **);
char	*read_f();
void	option_one();
int	isdigitstr(char *);
char	*my_strcapitalize(char *);
void	my_putchar(char);
void	my_putcharf(char);
char	my_charcapitalize(char);
char	**my_strtowordtab(char *);
void	option_two();
char	**transform_str(char **);
void	option_three();
void	option_five();
void	option_six();
void	check_tag2(char *);
void	check_tag(char *);
void	check_tag3(char *);
#endif /* !MY_H_ */
