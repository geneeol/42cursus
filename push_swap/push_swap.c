/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahkang <dahkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:56:33 by dahkang           #+#    #+#             */
/*   Updated: 2022/11/26 21:00:43 by dahkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_info	*set;
	set = input_parser(argc, argv);
	if (set->st_a->size <= 1)
		ft_err_exit(EXIT_FAILURE);
	else if (set->st_a->size == 2)
		sort_2_elem(set);
	else if (set->st_a->size == 3)
		sort_3_elem(set);
	else
		sort(set);
}
