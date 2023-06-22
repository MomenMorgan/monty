#ifndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct logs_s | assistant variables |
 * @args: incoming values
 * @file: a pointer to the monty files
 * @content: the line data
 * @swit: indicator to change the stack to queue
 * Description: share values between files 
 */

typedef struct logs_s
{
	char *args;
	FILE *file;
	char *data;
	int swit;
}  logs_t;
extern logs_t logs;


void free_st(stack_t *head);
int exe(char *data, stack_t **st, unsigned int i, FILE *file);
void newnode(stack_t **head, int v);
void queue_p(stack_t **head, unsigned int i);
void newqueue(stack_t **head, int v);
void my_pint(stack_t **head, unsigned int i);
void my_pall(stack_t **head, unsigned int i);
void my_push(stack_t **head, unsigned int i);
void my_pop(stack_t **head, unsigned int i);



#endif
