#ifndef MONTY_H
#define MONTY_H

#define INVALID_ARGUMENT_NUMBER 10
#define INVALID_FILE 11
#define INVALID_PARSING_ARGUMENT 12
#define INVALID_ARGUMENT_FORMAT 13
#define PINT_EMPTY_STACK 14
#define POP_EMPTY_STACK 15
#define SWAP_EMPTY_STACK 16
#define ADD_EMPTY_STACK 17
#define SWAP_STACK_TOO_SHORT 18
#define ADD_STACK_TOO_SHORT 19
#define MALLOC_FAILED 20

#define BUFFER_SIZE 1024
#define COMMAND_SEPARATOR " \n"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct data_s
{
	char **arguments;
	char *buffer;
	FILE *fileDescriptor;
	stack_t *queue;
	int lineNumber;
} data_t;

extern data_t *appData;

void _add(stack_t **stack, unsigned int line_number);
void _addWord(char *prmWord, int *prmIndex, char **prmArray);
int _atoi(char *prmString);
void *_calloc(unsigned int prmNumber, unsigned int prmSize);
int _checkArguments();
int _checkEscapeSeparators(char prmChar, char *prmEscapeSeparators);
int _checkSeparators(char prmChar, char *prmSeparators);
char *_cleanString(char *prmString);
stack_t *_createStack(int prmNumber);
void _errorHandler(int prmErrorCode);
void _freeAppData();
void _freeCharDoublePointer(char **prmPtr);
void _freeStackList(stack_t *prmHeadNode);
void (*_getCustomFunction(char *prmCommand))(stack_t **, unsigned int);
char *_getword(char *prmGlobal, int prmOffset, int prmSize);
int _inArray(char prmChar, char *prmArray);
int _isdigit(char prmChar);
void _initAppData();
int _isNumber(char *s);
char *_memcpy(char *prmDest, char *prmSrc, unsigned int prmLimit);
char *_memset(char *prmString, char prmCharacter, unsigned int prmLimit);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void *_realloc(void *prmPtr, unsigned int prmOldSize, unsigned int prmNewSize);
int _stackLen(stack_t *stack);
int _strcmp(char *prmString1, char *prmString2);
char *_strcpy(char *prmDest, char *prmSrc);
char *_strdup(char *prmString);
int _strlen(char *prmStr);
char *_strncpy(char *prmDest, char *prmSrc, int prmLimit);
char **_strtow(char *prmString, char *prmSeparators, char *prmEscapeSeparators);
void _swap(stack_t **stack, unsigned int line_number);
int _wordNumber(char *prmString, char *prmSeparators);

#endif
