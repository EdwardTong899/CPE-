#include<bits/stdc++.h>
using namespace std;
bool prime[10000008];

void findprime(int l,int u,int temp){
	
	for(int i=2;i<=pow(u,0.5);i++){
		for(int j=i*2;j<=u;j+=i){
			if(j-temp>=0){
				prime[j-temp]=1;
				
				
			}
			
		}
		
	}

}


int main(){
    long long int l,u,temp;
    while(cin>>l>>u){    	
    	temp=l;
    	for(int i=0;i<=u-l;i++){
    		
    		prime[i]=0;
    	
    	}
    	findprime(l,u,temp);
    	
    	long long int cfirst=0,csecond=0;
    	long long int mfirst=0,msecond=0;
    	int closet=1000000;
    	int most=0;
    	for(int i=0;i<=u-l;i++){
    		if(prime[i]==0){
    			for(int j=i+1;j<=u-l;j++){
    				if(prime[j]==0){
    					
    					
    				
    					if(j-i<closet){
 
    						closet=j-i;
    						cfirst=i;
    						csecond=j;
    					}
    					if(j-i>most){
    						most=j-i;
    						mfirst=i;
    						msecond=j;
    					}
    					
    					
    					break;	
    				}
    			}

    		}
			
    		
    	
    	}
    	
    	if(cfirst==0&&csecond==0){
    		cout<<"There are no adjacent primes."<<endl;
    	}
    	else{
    		cout<<cfirst+l<<","<<csecond+l<<" are closest, "<<mfirst+l<<","<<msecond+l<<" are most distant."<<endl;
    	}
    	
	
    	
    }
    
    
    return 0;
}
