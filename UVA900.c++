#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    while(cin>>a,a){
   		vector<long long int>v;
   		v.push_back(1),v.push_back(2);
    	for(int i=2;i<=a-1;i++){
    		v.push_back(v[i-1]+v[i-2]);
    	}
    	cout<<v[a-1]<<endl;
    	
    }
    return 0;
}
