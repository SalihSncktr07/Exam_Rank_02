#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_range(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}

/*#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*res;
	int	size;
	int	i;

	size = (end - start) + 1;
	i = 0;
	res = (int *) malloc(size * sizeof(int));
	if (!res)
		return (NULL);
	while (i++ < size)
		res[i] = start + i;
	return (res);
}
*/

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	int *arr = ft_rrange(1,-3);
// 	while(i < 4)
// 	{
// 		printf("%d",arr[i]);
// 		i++;
// 	}
// }