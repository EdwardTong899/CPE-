#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    while(cin>>a,a)
    {
    	cin>>b;
    	int map[a][a]={0};
    	for(int i=0;i<a;i++)
    	{
    		for(int j=0;j<a;j++)
    		{
    			map[i][j]=0;    	
    		}
    		
    	}
    	for(int i=0;i<b;i++)
    	{
    		cin>>c>>d;
    		map[c][d]=map[d][c]=1;
    	
    	}
    	
    	int dress[a]={0};
    	dress[0]=-1;
    	stack <int> sta;
    	sta.push(0);
    	bool ans=true;
    	

    	while(sta.size())
    	{
    		int x=sta.top();
    		sta.pop();
    		for(int i=1;i<a;i++)
    		{
    			
    			
    			if(map[x][i]==0)continue;
    			if(dress[i]==0)
    			{
    				dress[i]=dress[x]*-1;
    				sta.push(i);
    				
    			
    			}
    			
    			else if(dress[i]==dress[x])
    			{
    				
    				ans=false;
    				
    				break;
    			}
    		
    		
    		}
    	
    		if(!ans)break;
    		
    	
    	}
    	

    	
    	
    	if(ans)cout<<"BICOLORABLE."<<endl;
    	else cout<<"NOT BICOLORABLE."<<endl;
    	
    	
    	
    	
    
    }
    return 0;
}
