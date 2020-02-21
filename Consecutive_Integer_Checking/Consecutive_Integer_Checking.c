#include <stdio.h>

int min(int m,int n)//returns smaller integer
{
	if(m>n)
		return m;
	
	else
		return n;
}

int int_check(int m,int n)
{
	int t;//initially smaller integer
	
	if(m==n)//both integers are same
	{
		return m;
	}
	
	else
	{
		while(m%t!=0 || n%t!=0)
			t=t-1;
			
		return t;
	}
}

int main()
{
  int choice;
  int m,n;//non-zero,non-negative Integers

  for(;;)
  {
    printf("\nEnter 1.To calculate GCD or any other key to Exit:\t");
    scanf("%d",&choice);

    if(choice==1)
    {
      printf("\nEnter 2 non-zero, non-negative Integers:\n");
      scanf("%d%d",&m,&n);

      if(m<=0 || n<=0)
        printf("\nInvalid Input: Please Enter 2 non-zero, non negative Integers\n");

      else
        printf("\nThe Greatest Common Denominator is %d\n",int_check(m,n));
    }

    else
      return 0;
  }
}
