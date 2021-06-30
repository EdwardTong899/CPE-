#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    while(cin>>a){
    	
    	vector <int> cac;
    	cac.push_back(1);
    	long long int carry=0;
    	for(int i=2;i<=a;i++){
    		for(int j=0;j<cac.size();j++){
    			cac[j]=cac[j]*i+carry;
    			carry=0;
    			if(cac[j]>9){
    				carry=cac[j]/10;
    				cac[j]=cac[j]%10;
    			}
    		}
    		if(carry!=0){
    			while(carry){
    				cac.push_back(carry%10);
    				carry=carry/10;
    			}
    		}
    		
    	}

    	
    	int count=0;
    	for(int i=0;i<cac.size();i++){
    		count+=cac[i];
    	}
    	cout<<count<<endl;
    	
    	
    
    }
    return 0;
}
