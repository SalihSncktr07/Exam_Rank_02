#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int size;
    size = (start <= end) ? (end - start + 1) : (start - end + 1);

    int *res = (int *)malloc(sizeof(int) * size);
    if(!res)
        return NULL;

    while(i < size)
    {
        res[i] = start;
        start += (start <= end) ? 1 : -1;
        i++;
    }
    return res;
}

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	int *arr = ft_range(-1, 2);
// 	while(i < 4)
// 	{
// 		printf("%d",arr[i]);
// 		i++;
// 	}
// }