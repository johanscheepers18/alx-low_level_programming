#include <stdio.h>

/**
 * main - Entry point
 * Description: This program is used to print the alphabet in one line
 * Return: Always 0
 */
int main(void)
{
        char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

        int i;

        for (i = 0 ; i <= 26 ; i++)
        {
                if (alpha[i] == 'y')
                {
                        putchar(alpha[i]);
                        putchar('\n');
                }
                else
                {
                        putchar(alpha[i]);
                }
        }

        return (0);
}
