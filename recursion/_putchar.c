#include <unistd.h>

/**
 * This is my putchar 
 * MY ALL MINEEE!!!! LOL
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);

	return (0);
}
