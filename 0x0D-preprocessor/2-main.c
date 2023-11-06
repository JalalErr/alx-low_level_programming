nes (12 sloc)  261 Bytes

#include <stdio.h>
/**
 * main - Program compilation starts from the main
 * Description: this program prints the name of the file it was comipiled from
 * author: jonblesson
 * Return: 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
