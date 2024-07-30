#include <stdio.h>
int fib(int f1,int f2,int n)
{
    int f3;
    if(n>2)
    {
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
        return fib(f1,f2,n-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
	int f1=0,f2=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("%d\n%d\n",f1,f2);
    fib(f1,f2,n);
	
	return 0;
}