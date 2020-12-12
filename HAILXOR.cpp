#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vex vector<vector<int>>
#define pex pair<int, int>
#define vpex vector<pair<int, int>>
#define pb push_back
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t;
 cin>>t;
 while(t--)
 {
    ll n,x,p;
     ll i,j,k;
    ll sum=0;
     ll finthehouse=0;
  
     cin>>n>>x;
        ll  arr[n];
         vex v(n,vi(33,0)); 
     for(i=0;i<n;i++){
         cin>>arr[i];}
     for(i=0;i<n;i++)
     {
         j=0;
         p =arr[i];
                 while(p>0)
         {
             v[i][j++]=p%2;
             p=p/2;
         }
     }
     
     for(i=0;i<n;i++)
     {
         for(j=32;j>=0;j--)
         {
             if(x>0 && v[i][j]==1)
             {
                 finthehouse=0;
                 for(k=i+1;k<n-1;k++)
                 {
                     if(v[k][j]==1)
                     {
                         finthehouse=1;
                         v[k][j]=0;
                         v[i][j]=0;
                         x--;
                         break;
                     }
                 }
                 if(finthehouse==0 && i!=n-1 && x>0)
                {
                    v[i][j]=0;
                    v[n-1][j]^=1;
                    x--;
                }}}}
     
     i=0;
     while(i<n)
     {
         sum=0;
         for(j=0;j<33;j++)
         {
             sum += v[i][j]*(1<<j);
         }
         arr[i]=sum;
         i++;
     }
     
     if(x>0)
     {
         if(x%2==1)
         {
             if(n==2)
             {
                 arr[n-1]^=1;
                 arr[n-2]^=1;

         }}
     }
     
     
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 return 0;
}
