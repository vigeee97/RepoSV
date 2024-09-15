#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;
    int *ptr = &a; // Инициализация указателя ptr
    ft_ft(ptr);    // Вызов функции ft_ft с указателем ptr

    printf("%d\n", a); // Вывод значения переменной a после вызова ft_ft

    return 0;
}

