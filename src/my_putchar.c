/*
** EPITECH PROJECT, 2023
** MY_PUTCHAR
** File description:
** WRITE
*/

#include "my.h"
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}