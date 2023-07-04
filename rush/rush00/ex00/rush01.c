/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 00:42:07 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/04 10:08:52 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	wid;
	int	len;

	wid = x;
	len = y;
	if (x < 0 || y < 0)
		return ;
	while (--len >= 0)
	{
		while (--wid >= 0)
		{
			if ((wid == x - 1 && len == y - 1) || (len == 0 && wid == 0))
				ft_putchar('/');
			else if ((len == 0 && wid == x - 1) || (wid == 0 && len == y - 1))
				ft_putchar('\\');
			else if ((wid < x - 1 && wid > 0) && (!(len == 0 || len == y - 1)))
				ft_putchar(' ');
			else if (!((wid == x - 1 && len == y - 1) || (len == 0 && wid == 0))
				|| (!((len == 0 && wid == x - 1)
						|| (len == 0 && wid == 0)) && (wid < x -1 && wid > 0)))
				ft_putchar('*');
		}
		wid = x;
		ft_putchar('\n');
	}
}
