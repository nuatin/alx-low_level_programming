<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
=======
#define MAIN_H
#ifndef MAIN_H
>>>>>>> 4f7982d299eefa3153adeb1de899643066eb0b66

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

<<<<<<< HEAD
=======











>>>>>>> 4f7982d299eefa3153adeb1de899643066eb0b66
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
<<<<<<< HEAD

=======
>>>>>>> 4f7982d299eefa3153adeb1de899643066eb0b66
