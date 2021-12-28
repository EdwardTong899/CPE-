#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    while(cases--){
    	int n;
    	cin>>n;
    	vector<int>nb;
    	for(int i=0;i<n;i++){
    		int temp;
    		cin>>temp;
    		nb.push_back(temp);
    	}
    	
		int diff;
		diff=nb[0]-nb[1];
		int max1=max(nb[0],nb[1]);

    	for(int i=2;i<nb.size();i++){
    		diff=max(diff,max1-nb[i]);
    		max1=max(max1,nb[i]);
    	}
    	cout<<diff<<endl;;
    	
    }
    return 0;
}
