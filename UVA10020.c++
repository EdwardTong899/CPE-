#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,temp1,temp2;
    cin>>a;
    while(a--)
    {
    	
    	int M;
    	cin>>M;
    	vector<int>L;
    	vector<int>R;
    	while(cin>>temp1>>temp2)
    	{
    		if(temp1==0&&temp2==0)break;
    		L.push_back(temp1);
    		R.push_back(temp2);
    		
    	}
    	
   	
    	int left=0;
    	bool find=false;
    	vector<int>out;
    	int n=10;
    	while(left<M)
    	{
    		
    		int index=0;
    		find=false;
    		bool first=true;
    		
    		
    		for(int i=0;i<L.size();i++)
    		{
    			if(first==true&&L[i]<=left&&R[i]>left)
    			{
    				index=i;
    				find=1;
    				first=false;

    			}
    			else if(first==false&&L[i]<=left&&R[i]>R[index])
    			{
    				index=i;
    				find=1;
    			
    			}
    		
    		
    		
    		}
    		if(find==false)
    		{
    			left=10000;
    			break;
    		}
    		
    		left=R[index];
    		
    	    out.push_back(L[index]);
    		out.push_back(R[index]);
    		

    	
    	}
   			if(left==10000)cout<<"0"<<endl;
   			else
   			{
    			cout<<out.size()/2<<endl;
    			for(int i=1;i<out.size();i+=2)
    			{
    				cout<<out[i-1]<<" "<<out[i]<<endl;
    		
    			}
    		}
    		if(a!=0)cout<<endl;
    
    
    }
    return 0;
}
