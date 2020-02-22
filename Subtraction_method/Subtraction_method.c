#include <stdio.h>

int subtract_gcd(int m,int n)
{
	while(m!=n)
	{
		if(m>n)
			m=m-n;
		
		else
			n=n-m;
	}
	return m;
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
        printf("\nThe Greatest Common Denominator is %d\n",subtract_gcd(m,n));
    }

    else
      return 0;
  }
}
