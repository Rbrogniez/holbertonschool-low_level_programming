#ifndef B7C28C9A_E306_4049_924D_73907DFA49DA
#define B7C28C9A_E306_4049_924D_73907DFA49DA
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */


#endif /* B7C28C9A_E306_4049_924D_73907DFA49DA */
