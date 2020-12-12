#include <bits/stdc++.h>
using namespace std;
 void result(int arr[],int n)
{
     for (int i = 0; i<n; i++)
        {
            cout << arr[i]<< " ";
        }
} 
int main ()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >>n>>k;

        int arr[n];
        int  count = 1;
        int d=n-k;
       for (int i=0; i<n; i++)
        {
            arr[i] = i+1;
        }

        int i = 0;
        while (d--)
        {   
            arr[i]=arr[i]-2*arr[i];
            if (count!= 1)
                i=i-2;
            else
                i=i+2;
            if (i == n+1)
            {
                i = n-2;
               count= 0;
            }
            else
            if(i==n)
            {
                count=0;
                i=n-1;
            }}
      
        result(arr,n);
        cout << endl;    
    }
    return 0;
}
