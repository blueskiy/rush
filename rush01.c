/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blueskiy <blueskiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:52:21 by blueskiy          #+#    #+#             */
/*   Updated: 2021/12/06 11:52:22 by blueskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_matrix(int x, int y, int width, int height)
{
	int	last_position;

	while (width <= x)
	{
		last_position = (height == y && width == x && height > 1 && width > 1);
		if ((height == 1 && width == 1) || last_position)
		{
			ft_putchar('/');
		}
		else if ((height == 1 && width == x) || (height == y && width == 1))
		{
			ft_putchar('\\');
		}
		else if ((width != 1 && width != x) && (height != 1 && height != y))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('*');
		}
		width++;
	}
}

void	rush(int x, int y)
{
	int	height;
	int	width;

	height = 1;
	width = 1;
	while (height <= y)
	{
		print_matrix(x, y, width, height);
		height++;
		if (x > 0)
		{
			ft_putchar('\n');
		}
	}
}
