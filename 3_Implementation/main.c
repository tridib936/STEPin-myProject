/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "stdio.h"
#include "string.h"
#include "calculation.h"

void print(double result,const char* operator)
{
    printf("The %s is %lf\n", operator, result);
}
void printerror()
{
    printf("Wrong order of input. Math error\n");
}
int main()
{
    int on;
    printf("Enter 1 to switch on\n");
    scanf("%d",&on);
    if(on==1)
    {
        int size,i,temp,mode;
        char operator, otheroperator[3];
        double result;
        printf("Enter the number of operands. For division, there must be only two operands. For logarithm, only one operand. Returns to base of e. For trigonometry, only one operand.\n");
        scanf("%d",&size);
        double array[size];
        printf("Enter the operands in the correct order\n");
        for(i=0;i<size;i++)
        {
            scanf("%lf",&temp);
            array[i]=temp;
        }
        printf("Enter 1 for mode 1 or 2 for mode 2. Mode 1 has addition(+), substraction(-), multiplication(*), division(/), factorial(!) and permutation(P) and combination(C). Mode 2 has logarithm(log) and trigonometry(sin, cos or tan).\n");
        scanf("%d",&mode);
        if(mode==1)
        {
            printf("Enter the operator\n");
            scanf("%c",&operator);
            if(operator=='+')
            {
                result=sum(array,size);
                print(result,"Sum");
            }
            else if(operator=='-')
            {
                result=difference(array,size);
                print(result,"Difference");
            }
            else if(operator=='*')
            {
                result=multiply(array,size);
                print(result,"Multiplication");
            }
            else if(operator=='/')
            {
                if(size>2)
                {
                    printf("Wrong input\n");
                }
                else
                {
                    result=divide(array,size);
                    print(result,"Division");
                }
            }
            else if(operator=='!')
            {
                if(size>1)
                {
                    printf("Wrong input\n");
                }
                else
                {
                result=factorial(array);
                print(result,"Factorial");
                }
            }
            else if(operator=='P')
            {
                if(size>2)
                {
                    printf("Wrong input\n");
                }
                else
                {
                result=permutation(array);
                print(result,"Permutation");
                }
            }
            else if(operator=='C')
            {
                if(size>2)
                {
                    printf("Wrong input\n");
                }
                else
                {
                result=combination(array);
                print(result,"Combination");
                }
            }
            else
            {
                printf("Wrong input\n");
            }
        }
        else if(mode==2)
        {
            printf("Enter the operator\n");
            gets(otheroperator);
            if(strcmp(otheroperator,"log")==0)
            {
                if(size>1)
                {
                    printf("Wrong input\n");
                }
                else
                {
                    result=logarithm(array);
                    print(result,"log");
                }
            }
            else if(strcmp(otheroperator,"sin")==0)
            {
                if(size>1)
                {
                    printf("Wrong input\n");
                }
                else
                {
                    result=sine(array);
                    print(result,"sin in radian");
                }
            }
            else if(strcmp(otheroperator,"cos")==0)
            {
                if(size>1)
                {
                    printf("Wrong input\n");
                }
                else
                {
                    result=cosine(array);
                    print(result,"cos in radian");
                }
            }
            else if(strcmp(otheroperator,"tan")==0)
            {
                if(size>1)
                {
                    printf("Wrong input\n");
                }
                else
                {
                    result=tangent(array);
                    print(result,"tan in radian");
                }
            }
            else
            {
                printf("Wrong input\n");
            }
        }
        else
        {
            printf("Wrong Input\n");
        }
    }
    else
    {
        printf("Calculator is not on\n");
    }
    return 0;
}