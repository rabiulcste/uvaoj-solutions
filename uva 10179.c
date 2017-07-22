#include <stdio.h>

int totient (int i)
{
	int res; /* Result */
	int j;

	if (i==1) return 1;

        res=i;

        /* Check for divisibility by every prime number below the square root. */
        /* Start with 2. */
        if (i%2==0)
        {
		res-=res/2;
		do i/=2; while (i%2==0) ;
        }

        /* Since this doesn't use a list of primes, check every odd number. Ideally, skip past composite numbers.*/
	for (j=3; j*j<=i; j+=2)
	{
		if (i%j==0)
		{
			res-=res/j;
			do i/=j; while (i%j==0) ;
		}
	}

        /* If i>1, then it's the last factor at this point. */
	if (i>1) res-=res/i;

        /* Return the result. */
	return res;
}

int main()
{
    int n;
    while(scanf("%d", &n) && n!=0){
    	printf("%d\n", totient(n));
    }
    return 0;
}
