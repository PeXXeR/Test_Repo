#include<iostream>
#include<cstdio>
#include<cmath>
#include <bits/stdc++.h>
// Include headers as needed

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, temp;
        cin>>n>>k;
        int *a = new int[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a, a+n);

        int i=0, j=n-1, count=0;

        while(j>i)
        {
            if(a[i] + a[j] == k)
            {
                count++;
                i++; j--;
            }
            else if(a[i] + a[j] > k)
                j--;
            else
                i++;
        }

        cout<<count<<endl;
    }
    return 0;
}

