#include<bits/stdc++.h>
using namespace std;
int index;
int a,b;
int Map[110][110];
char oil[110][110];
void Collectoil(int i,int j)
{
	if(i<0||j<0||i>=a||j>=b)
	{
		return;
	
	}
	else if(Map[i][j]!=0||oil[i][j]!='@')
	{
		return;
	
	}
	else
	{
		Map[i][j]=index;
		
		Collectoil(i+1,j);
		Collectoil(i+1,j+1);
		Collectoil(i+1,j-1);
		Collectoil(i,j+1);
		Collectoil(i,j-1);
		Collectoil(i-1,j+1);
		Collectoil(i-1,j);
		Collectoil(i-1,j-1);
		
	
	
	
	
	
	
	
	
	}


}



int main(void){
    
    
    while(cin>>a,a)
    {
    	cin>>b;

    	for(int i=0;i<a;i++)
    	{
    		for(int j=0;j<b;j++)
    		{
    			cin>>oil[i][j];
    			Map[i][j]=0;
    		}
    	}
    

    
    
    	index=0;
    	
    	for(int i=0;i<a;i++)
    	{
    		for(int j=0;j<b;j++)
    		{

    			if(Map[i][j]==0&&oil[i][j]=='@')
    			{
    				index++;
    				Collectoil(i,j);
    			}
    			
    	
    		}
    	
    	}
    		
    	cout<<index<<endl;
    		
    
    }
    return 0;
}
