#include <stdio.h>

int phi (int n) {
	int result = n;
	int i;
	for ( i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

int main()
{
    int n;
    while(scanf("%d", &n) && n!=0){
        printf("%d\n", phi(n));
    }
    return 0;
}
