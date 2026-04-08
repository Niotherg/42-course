/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:35:02 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/25 18:55:39 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
// 1 if (Value > 0), -1 if (Value < 0), 0 if (Value = 0)
# define ABS(Value) (Value) * ((Value > 0) - (Value < 0))

#endif