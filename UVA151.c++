#include<bits/stdc++.h>
using namespace std;
int n,out;



int main(){
    
    while(cin>>n,n)
    {
    	
    	
    	out=0;
    	for(int i=1;i<=1000;i++)
    	{
    		queue<int>crisis;
    		for(int j=2;j<=n;j++)
    		{
    			crisis.push(j);
    			
    			
    		}
    		
    		
    		while(crisis.size()!=1)
    		{
    			out++;
    			if(out==i)
    			{
    				out=0;
    				crisis.pop();
    			}
    			else
    			{
    				int temp=crisis.front();
    				crisis.push(temp);
    				crisis.pop();
    			}
    		
    			if(crisis.size()==1&&crisis.front()==13)
    			{
    				cout<<i<<endl;
    				i=100000;
    				break;
    			}
    		}
    		
    		
    	}
    	
    	
    	
    	
    	
    }
    return 0;
}


