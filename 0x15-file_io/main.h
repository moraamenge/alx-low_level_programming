#ifndef MAIN_H
#define MAIN_H
	#include <stdlib.h>
	/*Library for open system call man open*/
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <fcntl.h>

	/*Library for close and write system call man close*/
	#include <unistd.h>

	ssize_t read_textfile(const char *filename, size_t letters);
	int create_file(const char *filename, char *text_content);
	int append_text_to_file(const char *filename, char *text_content);
#endif
© 2022 GitHub, Inc.