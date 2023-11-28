#include "main.h"

/**
 * read_textfile - function that reads a text file & prints in standard output.
 * @filename: string take name of file.
 * @letters: nomber of letters you want to print.
 * Return: the actual number of letters it could read and print,
 * (0) if the file can not be opened or read.
 * or if filename is NULL,or if write fails or does not write.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
/* Variable declaration section: */
ssize_t fd_o, fd_w, fd_r;
char *buff;

/* Code section*/
if (filename == NULL)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

fd_o = open(filename, O_RDONLY);
fd_r = read(fd_o, buff, letters);
fd_w = write(STDOUT_FILENO, buff, fd_r);
if (fd_o == -1 || fd_r == -1 || fd_w == -1 || fd_w != fd_r)
free(buff);
return (0);

free(buff);
close(fd_o);

return (fd_w);
}
