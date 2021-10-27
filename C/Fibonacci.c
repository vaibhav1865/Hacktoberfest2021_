 Program to generate Fibonacci Series(10 terms) 
Fibonacci series Any number in the series is obtained by adding the previous two numbers of the series. 

#includestdio.h
#includestdlib.h
int
main ()
{
array fib stores numbers of fibonacci series
  int i, fib[10];
 initialized first element to 0
  fib[0] = 0;
 initialized second element to 1
  fib[1] = 1;
loop to generate ten elements
  for (i = 2; i  10; i++)
    {
i'th element of series is equal to the sum of i-1'th element and i-2'th element.
      fib[i] = fib[i - 1] + fib[i - 2];
    }
  printf (n The fibonacci series is as follows  );
print all numbers in the series
  for (i = 0; i  10; i++)
    {
      printf (%3d, fib[i]);
    }
  printf (n);
  return 0;
} Program to generate Fibonacci Series(10 terms) 
Fibonacci series Any number in the series is obtained by adding the previous two numbers of the series. 

#includestdio.h
#includestdlib.h
int
main ()
{
array fib stores numbers of fibonacci series
  int i, fib[10];
 initialized first element to 0
  fib[0] = 0;
 initialized second element to 1
  fib[1] = 1;
loop to generate ten elements
  for (i = 2; i  10; i++)
    {
i'th element of series is equal to the sum of i-1'th element and i-2'th element.
      fib[i] = fib[i - 1] + fib[i - 2];
    }
  printf (n The fibonacci series is as follows  );
print all numbers in the series
  for (i = 0; i  10; i++)
    {
      printf (%3d, fib[i]);
    }
  printf (n);
  return 0;
}x