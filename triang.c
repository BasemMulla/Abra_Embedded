#include <stdio.h>
#include "triang.h"
#define MAX_SIZE 100
#define MIN_SIZE 1

int Check_parameters(int n, char ch)
{
  	if (n > MAX_SIZE || n < MIN_SIZE )
	{
		return SIZE_ERROR;
	}
	if (ch < '!' || ch > '~')
	{
		return	CHAR_TO_PRINT_ERROR;
	}
	return OK; 
  
}
int Print_line(int length ,char ch)
{
	  for (int j = 0 ; j < length ;j++ )
	  {
            printf("%c",ch);
	  }
      printf("\n");
}

int Print_left_aligned_triangle(int n, char ch)
{
  int result = Check_parameters(n,ch;
	if (result != OK)
	{
		return result;
	
  int i,j;

  for(i=0; i<=n; ++i)
  {
		Print_line(i , ch);
  } 
  return OK;
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
 

