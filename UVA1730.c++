#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c;
    while(cin>>a)
    {
    	if(a==0)break;
    	b=0;
    	for(int i=2;i<=a;i++)
    	{
    		c=a/i;
    		c=c*i;
    		b+=c;
    	
    	}
    	cout<<b+a-1<<endl;
    	
    
    }
    return 0;
}


