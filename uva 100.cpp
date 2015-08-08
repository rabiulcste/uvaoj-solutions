#include<stdio.h>
int main()
{
    int n, m, i, temp, j, count_length, max;
    while(scanf(" %d %d",&n,&m) == 2)
    {
        max = 0;
        printf("%d %d",n,m);
        if(n>m)
        {
            temp = m;
            m = n;
            n = temp;
        }
        for(i=n; i<=m; i++)
        {
            count_length = 1;
            j = i;
            while(j > 1)
            {
                if(j % 2==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                count_length++;
            }
            if(count_length >= max)
                max = count_length;
        }
        printf(" %d\n", max);
    }
    return 0;
}
