#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    
    while(cin>>s1>>s2)
    {
    	
    	int index=0;
    	bool isok=0;
    	for(int i=0;i<s1.size();i++)
    	{
    		isok=0;
    		for(int j=index;j<s2.size();j++)
    		{
    			if(s1[i]==s2[j])
    			{
    				index=j+1;
    				isok=1;
    				break;
    			}
    		}
    		if(isok==0)
    		{
    			break;
    		}
    	
    	}
    	if(isok==1)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    
    }
    return 0;
}
