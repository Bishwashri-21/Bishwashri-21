#include<stdio.h>
int fib(int n)
{
//Declaring an array to store Fibonacci numbers.//
int fib[n];
int i;

// 0th and 1st number of the series are 0 and 1//
fib[0] = 0;
fib[1] = 1;

for (i = 2; i <= n; i++)
{
	//Adding the previous 2 numbers in the series and storing it //

	fib[i] = fib[i-1] + fib[i-2];
}

return fib[n];
}

int main ()
{
int n = 20000;
printf("The 20000th term of the Fibonacci series is %d", fib(n));
getchar();
return 0;
}
