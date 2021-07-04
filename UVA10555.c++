#include<bits/stdc++.h>
using namespace std;

int fgcd(long int i,long int j){
	i=i%j;
	if(i==0){
		return j;
	
	}
	else fgcd(j,i);


}
int main(){
    string s;
    long long int outDen;
    long long int outmole;
    while(cin>>s,s!="0"){
    	
    	

    	
    	
    	for(int i=2;i<s.size()-3;i++){
    		//cout<<s[i]<<endl;
    		string nb1,nb2;
    		long int nb1denominator=1;
    		string nb2denominator="";
    		nb1=nb2="";
    		for(int j=i;j<s.size()-3;j++){
    			nb2+=s[j];
    			nb2denominator+='9';
    		}
    		if(i==2)nb1+="0";
    		for(int j=2;j<i;j++){
    			nb1+=s[j];
    			nb1denominator*=10;
    		}
    		long long int intnb1,intnb2,intnb2denominator;
    		intnb1=stoi(nb1);
    		intnb2=stoi(nb2);
    		intnb2denominator=stoi(nb2denominator);

    		long long int Denominator=intnb2denominator*nb1denominator;
    		long long int molecular=intnb2denominator*intnb1+intnb2;
    		outDen=999999999;
    		long long int gcd=fgcd(Denominator,molecular);
    		Denominator=Denominator/gcd;
    		molecular=molecular/gcd;
    		
    			
    		
    		
    		if(Denominator<outDen&&Denominator!=0){
    			outDen=Denominator;
    			outmole=molecular;
    		
    		}
    		
    	
    	}
    	cout<<outmole<<"/"<<outDen<<endl;
    
    }
    return 0;
}
