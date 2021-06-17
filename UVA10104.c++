#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,A,B;
    while(cin>>A>>B)
    {
		a=A;
		b=B;
    	while(1)
    	{
    		long long int temp1,temp2;
    		temp1=max(a,b);
    		temp2=min(a,b);
    		a=temp1-temp2;
    		b=temp2;
    		if(a==0)
    		{
    			
    			break;
    		}
    		if(a==1)
    		{
    			b=1;
    			break;
    		
    		}
    	
    	}
    	
    	int x=100,y=100;
    	int x1,y1;
    	
    	for(int i=-100;i<100;i++)
    	{
    		if((-A*i+b)%B==0)
    		{
    			x1=i;
    			y1=(-A*i+b)/B;
    			if(abs(x1)+abs(y1)<abs(x)+abs(y))
    			{
    				x=x1;
    				y=y1;
    			}
    		
    		}
    	
    	}
    	cout<<x<<" "<<y<<" "<<b<<endl;
    	
    	
    	
    	
    	
    
    }
    
    
    return 0;
}
