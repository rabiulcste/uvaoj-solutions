#include <bits//stdc++.h>

using namespace std;

int merge(int arr[], int l, int m, int r)
{
    int i, j, k, cnt = 0;;
    int n1 = m - l + 1;
    int n2 = r - m;

    // temp left and right sub-arrays
    int L[n1], R[n2];

    // copy data to temp arrays L[] and R[]
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // sort and merge the two arrays back
    i = j = 0;
    k = l;

    while(i < n1 && j < n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
            cnt+=j;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    cnt += j * (n1 - i);
    // copy the remaining elements of L[], if there any
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copy the remaining elements of R[], if there any
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    return cnt;
}

int mergeInverse(int arr[], int l, int r)
{
    int countInversion = 0;
    if(l < r)
    {
        int m = l + (r-l)/2;
        countInversion += mergeInverse(arr, l, m);
        countInversion += mergeInverse(arr, m+1, r);
        countInversion += merge(arr, l, m, r);
    }
    return countInversion;
}

int main()
{
    int n, test, arr[61];
    cin>>test;
    while(test--) {
    cin>>n;
    for(int i = 0; i < n; i++) cin>>arr[i];
    int res = mergeInverse(arr, 0, n-1);

     printf("Optimal train swapping takes %d swaps.\n", res);

    }
    return 0;
}
