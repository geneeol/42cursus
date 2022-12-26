/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahkang <dahkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 04:08:06 by dahkang           #+#    #+#             */
/*   Updated: 2022/12/27 04:09:10 by dahkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	iso_proj(t_vars *vars)
{
	vars->alpha = M_PI_4;
	vars->beta = asin(tan(M_PI / 6));
	vars->gamma = 0;
	vars->x_scale = 1;
	vars->y_scale = 1;
	vars->z_scale = 1;
	vars->x_translate = 0;
	vars->y_translate = 0;
}

void	parellel_proj(t_vars *vars)
{
	vars->alpha = M_PI_2;
	vars->beta = 0;
	vars->gamma = 0;
	vars->x_scale = 1;
	vars->y_scale = 1;
	vars->z_scale = 1;
	vars->x_translate = 0;
	vars->y_translate = 0;
}
