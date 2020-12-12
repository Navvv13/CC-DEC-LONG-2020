#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
 	while(t--)
 	{
 		 long long age[10000];
 	long long N;
 	long long  D;
 	long long  pr=0;
 	
 		long long npr;
 	
 		cin>>N>>D;
 		for(int i=0;i<N;i++)
 		{
 			cin>>age[i];
		 }
		
		 for(int i=0;i<N;i++)
		 {
		 
		 	if(age[i] >= 80 || age[i] <= 9)
		 	{
		 	pr=pr+1;
			 }
		
		 }
	 npr=N-pr; 
	long long  ppr=(pr / D) + ((pr % D) != 0);
	long long  pnpr=(npr / D) + ((npr % D) != 0);
	
		cout<<ppr+pnpr<<endl;
		 
		 
	 }
}
