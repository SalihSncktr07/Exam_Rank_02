#include <unistd.h>

void    ft_strcapi(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    i = 0;

    while(str[i])
    {
        if((str[i + 1] == ' ' ||str[i + 1] == '\0') && (str[i] != ' ') && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
    write (1, "\n", 1);
}

int main(int ac, char **av)
{
    int i = 1;
    
    if(ac == 1)
        write(1, "\n", 1);

    while(ac > i)
        ft_strcapi(av[i++]);
}

// #include <unistd.h>

// void    rstr_capitalizer(char *str)
// {
//     int i = 0;

//     while (str[i])
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] += 32;
//         if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' \
//                     || str[i + 1] == '\t' || str[i + 1] == '\0'))
//             str[i] -= 32;
//         write(1, &str[i++], 1);
//     }
// }

// int main(int argc, char **argv)
// {
//     int i;

//     if (argc == 1)
//         write(1, "\n", 1);
//     else
//     {
//         i = 1;
//         while (i < argc)
//         {
//             rstr_capitalizer(argv[i]);
//             write(1, "\n", 1);
//             i += 1;
//         }
//     }
//     return (0);
// }
