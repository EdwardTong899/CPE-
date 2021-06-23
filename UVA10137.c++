
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float d;
    while(cin>>n){
    	if(n==0)break;
    	vector<float>dollars;
    	float average=0;
    	for(int i=0;i<n;i++){
    		cin>>d;

    		
    		dollars.push_back(d);
    		average+=d;

    	}
    	average=average/n;

    	float out=0.00;
    	int carry=0;


    	for(int i=0;i<n;i++){
    		if(dollars[i]<average){
    			out+=average-dollars[i];
    		}
    			
    	}

    	
    	if(average==int(average)){
    		cout<<"$";
    		printf("%.2f",out);
    		cout<<endl;

    	}
    	else if(out==int(out)){
    		cout<<"$";
    		out=out-0.01;
    		printf("%.2f",out);
    		cout<<endl;
    		
    	}
    	else{
    		cout<<"$";
    		printf("%.2f",out);
    		cout<<endl;
    	}
    	

    }
    
    
    
    return 0;
}



