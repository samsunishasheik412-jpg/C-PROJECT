#include<stdio.h>
int main()
{
 char op;float a,b;
 printf("Enter expression(e.g.5+3):");
 scanf("%f %c %f",&a,&op,&b);
 switch (op)
 {
 case '+': printf(