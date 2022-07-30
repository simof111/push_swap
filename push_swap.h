/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:55:22 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/20 04:54:24 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

struct s_tack{
	int	size;
	int	maxsize;
	int	*items;
};
int				len(char *str);
void			ft_putstr(char *str);
void			ft_putchar(char c);
struct s_tack	*init(int cp, struct s_tack *pt);
int				isempty(struct s_tack *pt);
void			push(struct s_tack *pt, int nv);
int				issorted(struct s_tack *pt );
void			swt(struct s_tack *pt, char *s);
void			pa(struct s_tack *pta, struct s_tack *ptb, char *s);
void			rotate(struct s_tack *pt, char *s);
void			rev_rotate(struct s_tack *pt, char *s);
void			pb(struct s_tack *ptb, struct s_tack *pta, char *s);
void			ss(struct s_tack *pta, struct s_tack *ptb, char *s);
void			rr(struct s_tack *pta, struct s_tack *ptb, char *s);
void			rrr(struct s_tack *pta, struct s_tack *ptb, char *s);
long long		ft_atoi(const char *nptr);
void			cpy(int ar[], struct s_tack *pt);
void			swap(int *a, int *b);
void			ft_fugazi_sort(int array[], int n);
int				median(struct s_tack *pt);
void			sort(struct s_tack *pta, struct s_tack *ptb);
int				fdr(struct s_tack *pta, int md);
int				median_stackb(struct s_tack *pt, int end);
void			cpy_stackb(int ar[], struct s_tack *pt, int end);
int				is_sorted_desc(struct s_tack *pt, int end);
int				max(struct s_tack *pt, int end);
int				search(struct s_tack *pt, int sr, int end);
int				max_lc(struct s_tack *pt);
int				search_lc(struct s_tack *pt, int sr);
void			ft_sort(struct s_tack *pta, struct s_tack *ptb);
void			ft_sortmin(struct s_tack *pta, struct s_tack *ptb);
int				min_lc(struct s_tack *pt);
void			md1(int md, struct s_tack *pta, struct s_tack *ptb);
void			md2(int md, struct s_tack *pta);
void			md3(int md, struct s_tack *pta);
void			ft_sort1(struct s_tack *pta, struct s_tack *ptb);
void			ft_sort2(struct s_tack *pta, struct s_tack *ptb);
int				pos(struct s_tack *ptb, int tg);
void			pa_ra(struct s_tack *ptb, struct s_tack *pta,
					int tg, char *str);
void			pa_rra(struct s_tack *ptb, struct s_tack *pta,
					int tg, char *str);
int				check_double(char **av, int i);
int				only_nb(char **ar, int i);
void			pushmin(struct s_tack *pta, struct s_tack *ptb);
int				min(struct s_tack *pt);
void			push_min(struct s_tack *pta, struct s_tack *ptb);
void			sort_3(struct s_tack *pta, struct s_tack *ptb);
int				check(char **av, int j);
int				separ(char c, char sep);
int				ft_cword(char *str, char c);
void			wwrite(char *s1, char *s2, char c);
int				ft_split1(char **split, char *str, char c, int k);
char			**ft_split(char const *s, char c);
int				maxint(char **av, int i);
int				ft_isdigit(int c);
int				maincheck(int ac, char **av);
int				sizeav(char **str);
void			ex(char *str);
int				ch(char **av, int ac, int k, int j);
void			pb_ra(struct s_tack *ptb, struct s_tack *pta,
					int tg, char *str);
void			pb_rra(struct s_tack *ptb, struct s_tack *pta,
					int tg, char *str);
void			ac2(struct s_tack *pta, struct s_tack *ptb,
					char **str, char **av);
void			mainsort(struct s_tack *pta, struct s_tack *ptb);
void			ffree(char **str);
void			checker(struct s_tack *pta, struct s_tack *ptb);
void			checker_2(struct s_tack *pta, struct s_tack *ptb, char *str);
char			*get_next_line(int fd);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strdup(const char *src);
void			ffree1(char **str, struct s_tack *pta, struct s_tack *ptb);
void			ac3(struct s_tack *pta, struct s_tack *ptb, int ac, char **av);

#endif