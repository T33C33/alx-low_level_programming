#ifndef CALC_3H
#define CALC_3H

/**
 * struct op - start of struct op definition
 *
 * @op: first member of op
 * @f: second member of op
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
