#include<bits/stdc++.h>
using namespace std;
vector<int>digit;
bool slit(long long int a){
		for(int i=9;i>=2;i--){
			if(a%i==0){
				a=a/i;
				digit.push_back(i);
				i++;
			}
		}
		if(a!=1)return 0;
		else return 1;
	}





int main(){
    int n;
    long long int a;
    cin>>n;
    while(n--){
    	cin>>a;
    	//cout<<a;
    	digit.clear();
		if(a==0)cout<<"0"<<endl;
		else if(a==1)cout<<"1"<<endl;
		else if(slit(a)!=1)cout<<"-1"<<endl;
		else{
			for(int i=digit.size()-1;i>=0;i--){
				cout<<digit[i];
			}
			cout<<endl;
		}
    	
    
    }
    return 0;
}
