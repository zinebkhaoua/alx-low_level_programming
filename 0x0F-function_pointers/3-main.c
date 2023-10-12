#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);

    int result = 0;
    int is_valid_operator = 1;

    if (argv[2][1] != '\0' || (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%'))
    {
        is_valid_operator = 0;
    }
    
    if (is_valid_operator)
    {
        int (*operation[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
        int operator_index = 0;

        if (argv[2][0] == '+')
            operator_index = 0;
        else if (argv[2][0] == '-')
            operator_index = 1;
        else if (argv[2][0] == '*')
            operator_index = 2;
        else if (argv[2][0] == '/')
            operator_index = 3;
        else if (argv[2][0] == '%')
            operator_index = 4;

        result = operation[operator_index](num1, num2);
    }
    
    if (is_valid_operator == 0 || (argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
    {
        printf("Error\n");
        return (100);
    }
    
    printf("%d\n", result);
    return (0);
}

