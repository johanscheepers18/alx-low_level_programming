#include <stdio.h>
void launch_mess(void) __attribute__((constructor));

/**
 * launch_mess - message to be printed before main func
 */
void launch_mess(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
