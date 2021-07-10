#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(cin>>a){
    	vector<int>profit;
    	vector<int>deadline;
    	int longtime=0;
    	while(a--){
    		int input;
    		cin>>input;
    		profit.push_back(input);
    		cin>>input;
    		longtime=max(input,longtime);
    		deadline.push_back(input);
    	}
		int index;
		int count=0;
    	for(int i=longtime;i>0;i--){
    		int p=0;
    		for(int j=0;j<deadline.size();j++){
    			if(deadline[j]>=i&&profit[j]>p){
    				p=profit[j];
    				index=j;
    			}
    		}
    		count+=profit[index];
    		profit[index]=0;
    		deadline[index]=0;
    		
    	}
    	cout<<count<<endl;
    	
    }
    return 0;
}
