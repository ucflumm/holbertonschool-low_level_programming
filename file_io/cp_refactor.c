#include "main.h"

void error_print(int *fd_from, int *fd_to, char *buffer, char *error_string, int exit_code)
{
  if (error_string != NULL) 
    dprintf(2, "Error: %s\n", error_string);
  if (buffer != NULL)
    free(buffer);
  if (fd_from != NULL)
    close(fd_from);
  if (fd_to != NULL)
    close(fd_to);
  exit(exit_code);
}


/**
 * file_from_to - copy magic inside here
 * @file_from: source filename
 * @file_to: destination filename
 * Return: bytes_read
*/

ssize_t file_from_to(const char *file_from, const char *file_to)
{
  char *buffer;
  int fd_from, fd_to;
  ssize_t bytes_read;
  
  /* Open source file */
  fd_from = open(file_from, O_RDONLY);
  if (fd_from == -1)
    exit (98);

  /* Open destination file */
  fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if (fd_to == -1)
    error_print(fd_from, fd_to, NULL, NULL, 99);

  buffer = malloc(sizeof(char) * BUFFER_SIZE);
  if (buffer = NULL)
    error_print(fd_from, fd_to, buffer, 'malloc failed!', 100);
  
  while ((bytes_read = read(fd_from, buffer, buffer_SIZE)) > 0)
  {
    if (write(fd_to, buffer, bytes_read) != bytes_read)
      error_print(fd_from, fd_to, buffer, 'can't write to', 99);
  }
  if (bytes_read == -1)
    error_print(fd_from, fd_to, buffer, 'while reading ', 99);
  if (close(fd_from) == -1 || close (fd_to) == -1)
    error_print(fd_from, fd_to, buffer, 'Can't close fd', 100);
  return (bytes_read);
}
