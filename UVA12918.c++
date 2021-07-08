#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    while(a--){
    	cin>>b>>c;
    	long long int count=0;
    	for(int i=1;i<=b;i++){
    		count+=c-1;
    		c--;
    	}
    	cout<<count<<endl;
    	
    }
    return 0;
}

