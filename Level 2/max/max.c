int		max(int *tab, unsigned int len)
{
    int i = 0;
    int max = tab[i];

    if (len != 0)
    {
        while(i + 1 <= len)
        {
            if(max < tab[i])
                max = tab[i];
            i++;
        }
        return max;
    }
    return 0;
}

#include <stdio.h>
int main()
{

	int arr[] = {-5000, -10, -5, -30};
	printf("%d", max(arr, 0));
}
