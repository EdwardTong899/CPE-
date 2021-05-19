#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a,temp;
    
    while(getline(cin,s))
    {
    	if(s==".")break;
    	a="";
    	
    	for(int i=0;i<s.size();i++)
    	{
    		a+=s[i];
    		if((s.size()-(i+1))%(i+1)==0)
    		{
    			temp="";
    			bool power=1;// is true
    			int index=a.size();
    			index=index*2-1;
    			for(int j=i+1;j<s.size();j++)
    			{
    				temp+=s[j];
 
    				if(j==index)
    				{
    				
    					if(a!=temp)
    					{
    						power=0;
    						break;
    					
    					}
    					temp="";
    					index+=a.size();
    				
    				}
    				
    				
    			
    			
    			}
    			if(power)
    			{

    				cout<<s.size()/a.size()<<endl;
    				break;
    			
    			}
    		
    		}
    		
    	
    	}
    
    
    }
    return 0;
}
