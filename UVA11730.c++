#include<bits/stdc++.h>
using namespace std;
bool prime[1001];
void dotable(){
	prime[0]=prime[1]=1;
	for(int i=2;i<=pow(1000,0.5);i++){
		for(int j=i*2;j<=1000;j+=i){	
			prime[j]=1;
		}
	}
}


int main(){
    int a,b;
    dotable();
    int times=1;
    while(cin>>a>>b,a&&b){
    	cout<<"Case "<<times++<<": ";
    	queue<int>q;
    	q.push(a);
    	int table[10001]={0};
    	bool index=1;
    	int aa=0;
    	while(index){
    		
    		for(int i=q.front()-1;i>1;i--){
    			bool stop=1;
    			int value=i+q.front();
    			
    			if(value<=b&&q.front()%i==0&&prime[i]==0&&table[value]==0){
    					
    					q.push(value);
    					
    					table[value]=table[q.front()]+1;
    					if(value==b){
    						cout<<table[value]<<endl;;
    						index=0;
    						break;
    					}
    				}
    		}
    		
    		q.pop();
    		if(q.size()==0){
    			cout<<"-1"<<endl;
    			break;
    		}
   
    	}

    	
    }
    
    return 0;
}
