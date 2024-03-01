#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>


#define MAX_ARGS 10
#define MAX_LINE_LENGTH 1024

void getLine_check(char *ptr);
void exit_1(int value, char *pointer);
int check_space(char *array);
void environment(char **env);
int path_finder(char **ptr);


int process_command(char *line, char **env);
void get_cmd_prompt(void);
char *get_line(void);
void free_line(char *line);

int _fprintf(int f_des, char *buf);
int _fputch(int f_des, char ch);
void disp_env(char **env);

size_t _strspn(const char *s, const char *accept);
size_t _strlen(const char *s);
char *_strcat(char *dest, const char *src);
int _strcmp(const char *s1, const char *s2);
char *_strcpy(char *dest, const char *src);
char *my_strtok(char *str, const char *delim);
size_t my_strcspn(const char *str, const char *reject);
int is_delimiter(char c, const char *delim);

#endif
