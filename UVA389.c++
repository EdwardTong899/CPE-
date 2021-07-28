#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int a,b;

     while(cin>>s){
    	cin>>a>>b;
    	long long int sum=0;
    	int carry=1;
    	for(int i=0;i<s.size();i++){
    		int nb=(int)s[i];
    		if(nb<=57)nb-=48;
    		else nb-=55;
    		sum*=a;
    		sum+=nb;

    		
    		
    	}
    	string out="";
    	for(int i=0;i<7;i++){
    		int nb=sum%b;
    		sum/=b;
    		if(nb<10)nb+=48;
    		else nb+=55;
    		out+=char(nb);
    		
    	}
		reverse(out.begin(),out.end());
		cout<<out<<endl;
    	
    	
    
    }
    
    return 0;
}

