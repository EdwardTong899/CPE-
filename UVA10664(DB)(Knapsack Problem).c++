#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    string s,nb;
    cin>>a;
    getline(cin,s);
    while(a--)
    {
    	getline(cin,s);
    	
    	nb="";
    	vector<int>vec;
    	
    	for(int i=0;i<s.size();i++)
    	{
    		if(i==(s.size()-1)||s[i]==' ')
    		{
    			if(i==(s.size()-1))nb+=s[i];
    			//cout<<nb<<" ";
    			vec.push_back(stoi(nb));
    			nb="";
    		}
    		else nb+=s[i];
    		
    	
    	}
    	int count=0;
    	for(int i=0;i<vec.size();i++)
    	{
    		count+=vec[i];
    	}
    	bool ans=0;
    	if(count%2==0)
    	{
    	
    	vector<int>db;
    	db.push_back(0);
    	
    	for(int i=0;i<vec.size();i++)
    	{
    		int x=db.size();
    		for(int j=0;j<x;j++)
    		{

    			if(vec[i]+db[j]<count/2)
    			{
    				db.push_back(vec[i]+db[j]);
    			}
    			if(vec[i]+db[j]==count/2)
    			{
    				
    				ans=1;
    				i=100000;
    				break;
    			}
    		}
    	
    	}
    	}
    	
    	if(ans)cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    	
    	
    	
    
    }
    
    
    
    return 0;
}


