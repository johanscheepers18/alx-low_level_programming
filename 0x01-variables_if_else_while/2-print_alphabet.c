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

        for (i = 0 ; i <= 25 ; i++)
        {
		putchar(alpha[i]);

                if (alpha[i] == 'z')
                {
                        putchar('\n');
                }
        }

        return (0);
}
