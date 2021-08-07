#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cases=0;
    while(cin>>n){
    	int out=0;
    	
    	for(int i=0;i<n;i++){
    		int table[123]={0};
    		string s;
    		cin>>s;
    		for(int j=0;j<s.size();j++){
    			table[int(s[j])]++;
    		}
    		int count=0;
    		set<int>times;
    		for(int j=97;j<=122;j++){
    			if(table[j]!=0){
    				count++;
    				times.insert(table[j]);
    			}
    		}
    		if(count==times.size()&&count!=1)out++;
    		
    		
    	}
    	cout<<"Case "<<++cases<<": ";
    	cout<<out<<endl;
    	
    }
    return 0;
}


