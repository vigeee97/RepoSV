#include <unistd.h>

void ft_print_comb2(void)
{
    int a;
    int b;
    char c;
    char d = ' ';
    char e = ',';

    for (a = 0; a <= 98; a++)
    {
        for (b = a + 1; b <= 99; b++)
        {
            // Печатаем первую часть комбинации (a)
            c = '0' + (a / 10);
            write(1, &c, 1);
            c = '0' + (a % 10);
            write(1, &c, 1);

            // Печатаем пробел между числами
            write(1, &d, 1);

            // Печатаем вторую часть комбинации (b)
            c = '0' + (b / 10);
            write(1, &c, 1);
            c = '0' + (b % 10);
            write(1, &c, 1);

            // Печатаем запятую и пробел, если это не последняя комбинация
            if (a != 98 || b != 99)
            {
                write(1, &e, 1);
                write(1, &d, 1);
            }
        }
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}

