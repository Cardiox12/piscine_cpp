/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 06:06:51 by bbellavi          #+#    #+#             */
/*   Updated: 2021/06/18 16:26:33 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

#include <iostream>
#include <limits.h>
#include <ctype.h>
#include <cmath>
#include <float.h>

#define CAST_N_FN 4
typedef void(*cast_fn)(double);


void char_cast(double x);
void int_cast(double x);
void float_cast(double x);
void double_cast(double x);


static const cast_fn cast_fns[CAST_N_FN] = {
	char_cast,
	int_cast,
	float_cast,
	double_cast
};

#endif
