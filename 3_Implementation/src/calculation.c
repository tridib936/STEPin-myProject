/**
 * @file calculation.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "calculation.h"
#include "math.h"
#define PI 3.141592654
double sum(double array[],int size)
{
    int i;
    double Sum=0;
    for(i=0;i<size;i++)
    {
        Sum+=array[i];
    }
    return Sum;
}
double difference(double array[],int size)
{
    double Difference=array[0];
    int i;
    for(i=1;i<size;i++)
    {
        Difference-=array[i];
    }
    return Difference;
}
double multiply(double array[],int size)
{
    double Product=1;
    int i;
    for(i=0;i<size;i++)
    {
        Product*=array[i];
    }
    return Product;
}
double divide(double array[],int size)
{
    double Quotient=array[0];
    int i;
    if(array[1]==0)
    {
        printerror();
        return 0;
    }
    else
    {
        for(i=1;i<size;i++)
        {
            Quotient/=array[i];
        }
    return Quotient;
    }
}
double factorial(double array[])
{
    double Factorial=1;
    int i;
    if(array[0]==0)
    {
        return Factorial;
    }
    else
    {
        for(i=2;i<=array[0];i++)
        {
            Factorial*=i;
        }
        return Factorial;
    }
}
double permutation(double array[])
{
    double n=array[0];
    double r=array[1];
    double nfact=1;
    double Permutation,nrfact=1;
    int i;
    if(n>=r && r>=0 && n>0)
    {
        for(i=1;i<=n;i++)
        {
            nfact*=i;
        }
        for(i=1;i<=(n-r);i++)
        {
            nrfact*=i;
        }
        Permutation=nfact/nrfact;
        return Permutation;
    }
    else
    {
        printerror();
        return 0;
    }
}
double combination(double array[])
{
    double n=array[0];
    double r=array[1];
    double nfact=1;
    double Combination,nrfact=1,rfact=1;
    int i;
    if(n>=r && r>=0 && n>0)
    {
        for(i=1;i<=n;i++)
        {
            nfact*=i;
        }
        for(i=1;i<=(n-r);i++)
        {
            nrfact*=i;
        }
        for(i=1;i<=r;i++)
        {
            rfact*=i;
        }
        Combination=nfact/(rfact*nrfact);
        return Combination;
    }
    else
    {
        printerror();
        return 0;
    }
}
double logarithm(double array[])
{
    double Log,x=array[0];
    if(x>0)
    {
        Log=log(x);
        return Log;
    }
    else
    {
        printerror();
        return 0;
    }
}
double sine(double array[])
{
    double Sin, x=array[0];
    if(x>360)
    {
        x=x-360;
    }
    x=(x*PI)/180;
    Sin=sin(x);
    return Sin;
}
double cosine(double array[])
{
    double Cos, x=array[0];
    if(x>360)
    {
        x=x-360;
    }
    x=(x*PI)/180;
    Cos=cos(x);
    return Cos;
}
double tangent(double array[])
{
    double Tan, x=array[0];
    if(x>360)
    {
        x=x-360;
    }
    if((x/90)==1 || (x/90)==3)
    {
        printerror();
        return 0;
    }
    x=(x*PI)/180;
    Tan=tan(x);
    return Tan;
}
