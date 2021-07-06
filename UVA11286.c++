#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
    while(cin>>a,a){
    	int M=0;
    	int MC=0;
    	map<set<int>,int>count;
    	for(int i=0;i<a;i++){
    		set<int>temp;
    		

    		for(int j=0;j<5;j++){
    			cin>>b;
    			temp.insert(b);
    			
    		}
    		count[temp]++;
    		int h=count[temp];
    		
    		if(h>M){
    			M=h;
    			MC=1;
    		}
    		else if(h==M){
    			MC++;
    		}

    	}
    	cout<<M*MC<<endl;

    
    }
    return 0;
}
