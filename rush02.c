/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 03:44:27 by coder             #+#    #+#             */
/*   Updated: 2021/12/05 03:55:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void    print_matrix(int x, int y, int width, int height)
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
