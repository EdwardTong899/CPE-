#include<bits/stdc++.h>
using namespace std;
int meet[10][100000];

int main(){
    int n;
    cin>>n;
    while(n--){
    	
    	for(int i=0;i<10;i++){
    		for(int j=0;j<100000;j++){
    			meet[i][j]=0;
    		}
    	}
    	int begine,end;
    	int count[100000]={0};
    	int index=0;
    	int maxvalue=0;
    	int debug;
    	while(cin>>begine>>end,begine||end){
    		//cout<<begine<<end<<endl;
    		int index2=index;
    		for(int i=0;i<=index2;i++){
    			bool free=1;
    			for(int j=begine;j<end;j++){
    				if(meet[j][i]==1){
    					free=0;
    					break;
    				}
    			
    			}
    			if(free){
    				index++;
    				count[index]=count[i]+1;
    				for(int j=0;j<10;j++)meet[j][index]=meet[j][i];
    				for(int j=begine;j<end;j++){
    					meet[j][index]=1;
    				}

    				if(count[index]>maxvalue){
    					maxvalue=count[index];
    					debug=i;
    				}
    				
    			}
    		}
    		
    	}
    	/*for(int i=0;i<=30;i++){
    		for(int j=0;j<10;j++){
    			cout<<meet[j][i];
    		}
    		cout<<" "<<count[i];
    		cout<<endl;
    	}
    	*/
    	cout<<maxvalue<<endl;
    	
    	
    
    }
    
    
    return 0;
}
