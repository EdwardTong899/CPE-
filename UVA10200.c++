#include<bits/stdc++.h>
using namespace std;


int dotable(int c){
	
	for(int i=2;i<=pow(c,0.5);i++){
		if(c%i==0){
		 	return 0;
			break;
		}
		if(i==pow(c,0.5))return 1;
	
	}
	
}

int main(){
    int a,b;
    
    int c;
    while(cin>>a>>b){
    	int count=0;
    	for(int i=a;i<=b;i++){
    		c=i*(i+1)+41;
    		if(dotable(c))count++;
    		
    	
    	}
    	float out=0.0000;
    	out=(double)count/(b-a+1)*100+0.00001; 	
    	printf("%.2f",out);
    	cout<<endl;
    	
    } 
    
    
    return 0;
}


