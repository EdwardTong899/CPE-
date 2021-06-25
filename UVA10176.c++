#include<bits/stdc++.h>
using namespace std;

string binary(int cipher){
	string bits="";
	while(cipher){
		if(cipher%2==1){
			bits+="1";
			cipher--;
		}
		else{
			bits+="0";
		}
		cipher=cipher/2;
	
	}
	return bits;

}


int main(){
    string bits;
    string Scipher;
    int cipher=131071;
    Scipher=binary(cipher);
    reverse(Scipher.begin(),Scipher.end());
    //cout<<Scipher<<endl;
    while(cin>>bits){
    	//cout<<bits<<endl;
    	bool istrue=0;
    	if(bits=="0#"){
    			istrue=1;
    		}
		
		else{
			int count=0;
			for(int i=0;i<bits.size()-1;i++){
					if(bits[i]==1)count++;
					if(i==16&&count==17)istrue=1;
								
				}
			if(count!=17)istrue=0;
		
			}

    		if(istrue)cout<<"YES"<<endl;
    		else cout<<"NO"<<endl;
    	}
    	
    return 0;
}


