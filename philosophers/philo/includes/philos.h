/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philos.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahkang <dahkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:10:43 by dahkang           #+#    #+#             */
/*   Updated: 2023/02/05 15:00:33 by dahkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOS_H
# define PHILOS_H

# include "structures.h"

int		parse_input(t_rules *info, int argc, char **argv);
int		init(t_philo **philos, t_shared *shared, t_rules *rules);

int		destroy_mutexes(t_shared *shared, int n_philo);

void	pick_fork(t_philo *philo);
void	put_fork(t_philo *philo);
void	thinking(t_philo *philo);
void	eating(t_philo *philo);
void	sleeping(t_philo *philo);

int		create_threads(t_philo *philos, t_shared *shared);

t_msec	get_cur_time(void);
t_msec	get_elapsed_time(t_msec start_time);
void	print_die_and_mark_done(char *str, t_philo *philo);
void	print_state(char *str, t_philo *philo);
void	ft_usleep(t_msec time);

#endif
