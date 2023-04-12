#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int size;
    size = (start <= end) ? (end - start + 1) : (start - end + 1);

    int *res = (int *)malloc(sizeof(int) * size);
    if(!res)
        return NULL;

    while(i < size)
    {
        res[i] = end;
        end += (start <= end) ? -1 : 1;
        i++;
    }
    return res;
}

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	int *arr = ft_rrange(1 ,3);
// 	while(i < 3)
// 	{
// 		printf("%d",arr[i]);
// 		i++;
// 	}
// }