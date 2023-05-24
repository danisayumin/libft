#include   "libft.h"

char *ft_itoa(int n)
{
    char *str;
    int len;
    int sign;
    long long num;

    num = n;
    sign = 0;
    if (num < 0)
    {
        sign = 1;
        num *= -1;
    }
    len = ft_numlen(num);
    str = (char *)malloc(sizeof(char) * (len + sign + 1));
    if (!str)
        return (NULL);
    str[len + sign] = '\0';
    while (len--)
    {
        str[len + sign] = num % 10 + '0';
        num /= 10;
    }
    if (sign)
        str[0] = '-';
    return (str);
}