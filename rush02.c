/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blueskiy <blueskiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:52:40 by blueskiy          #+#    #+#             */
/*   Updated: 2021/12/06 11:52:43 by blueskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_matrix(int x, int y, int width, int height)
{
	while (width <= x)
	{
		if ((width == 1 || width == x) && height == 1)
		{
			ft_putchar('A');
		}
		else if ((width == 1 || width == x) && height == y)
		{
			ft_putchar('C');
		}
		else if ((width != 1 && width != x) && (height != 1 && height != y))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
		}
		width++;
	}
}

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = 1;
	height = 1;
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
