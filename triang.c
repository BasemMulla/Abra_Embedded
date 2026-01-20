#include <stdio.h>

void func1(int n, char ch)
{
int i,j;

  for(i=0; i<=n; ++i)
  {
    for(j=0;j<i;j++)
    {
      printf("%c",ch);
    }
    printf("\n");
  } 
}

void func2(int n, char ch)
{
  int i,j;
  
    for(i=0; i<n; ++i)
    {
     for(j=0;j<n-i;++j)
     {
        printf("%c",ch);
     }
    printf("\n");
  }
}

void func3(int n, char ch)
{
  /*triangle*/
  func1(n-1, ch);
  /*inverted triangle*/
  func2(n, ch);
}

void func4(int n, char ch)
{
  int i,j,k;
  
  for(i=1; i<=n; i++)
  {
    
    for(k=0 ; k<n-i;k++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%c",ch);
      if(j<i)
      {
      printf(" ");
      }
    }
    printf("\n");
  } 
}

void func5(int n, char ch)
{
  int i,j,k;
  
  for(i=n; i>=1 ; i--)
  {
    for(k=0 ;k<=n-i ; k++)
    {
      printf(" ");
    }
    
    for(j=1 ; j<=i ; j++)
    {
      printf("%c", ch);
      if(j<i)
      {
        printf(" ");
      }
      
    }
  printf("\n");
  }
}

void func6(int n, char ch)
{
  /*triangle*/
  func4(n,ch);
  /*inverted triangle*/
  func5(n-1,ch);
}
 

