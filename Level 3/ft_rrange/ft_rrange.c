#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int size = 0;
	int *arr;
	int start2 = start;
	
	if(start > end)
		size = start - end;
	else
		size = end - start;
	arr = (int*)malloc(sizeof(int)*(size + 1));
	int i = 0;
	while(size >= 0)
	{
		arr[i] = end;
		if(start2 > end)
			end++;
		else
			end--;
		size--;
		i++;
	}
	return arr;
}

/* #include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_rrange(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * ft_abs(end - start) + 1);
	while (end > start)
	{
		tab[i] = end;
		end--;
		i++;
	}
	tab[i] = end;
	while (end < start)
	{
		tab[i] = end;
		end++;
		i++;
	}
	tab[i] = end;
	return (tab);
}
 */

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	int *arr = ft_range(0,-3);
// 	while(i < 4)
// 	{
// 		printf("%d",arr[i]);
// 		i++;
// 	}
// }