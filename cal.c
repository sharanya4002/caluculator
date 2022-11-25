#include <stdio.h>
int main()
{
  char opt;
  int n1,n2;
  float res;
  printf("choose an operator to perform the operation in c caluculator");
  scanf("%c",&opt);
  if(opt == '/')
  {
    printf("you have selected:division");
  }
  else if(opt == '*')
  {
    printf("you have selected: multiplication");
  }
  else if(opt== '-')
  {
    printf("you have selected:subtraction");
  }
  else if(opt=='+')
  {
    printf("you have selected:addition");
  }
  printf("enter the first number:");
  scanf("%d",&n1);
  printf("enter the second number:");
  scanf("%d",&n2);
  switch(opt)
  {
    case '+':res=n1+n2;
    printf("addition is =%2f",res);
    break;
           case '-':res= n1-n2;
           printf("subraction is =%2f",res);
           break;
           case '*':res=n1*n2;
           printf("multiplication is =%2f",res);
           break;
    case '/':res=n1/n2;
      if(n2==0)
      {
        printf("divisor cannpot be zero.please enter another value");
        scanf("%d",&n2);
      }
      res =n1/n2;
      printf("division is =%2f",res);
      break;
    default:printf("something is wrong please check the options ");
  }
  return 0;
  
      printf("division is =%2f",res);
      break;
      
      
           
