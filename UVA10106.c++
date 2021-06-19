#include<bits/stdc++.h>
using namespace std;






int main(){
    string x,y;
    while(cin>>x>>y){
    
    	if(x=="0"||y=="0"){
    	cout<<'0'<<endl;
    	}
    	else{
    	vector <int> total;
    	for(int j=0;j<=600;j++){
    		total.push_back(0);	
    	}
    
    	for(int i=0;i<x.size();i++){
    		
    		char temp1=x[i];
    		vector <int> add;
    		

    		
    		
    		
    		for(int j=0;j<x.size()-1-i;j++){
    			add.push_back(0);
    		}
    		string yy=y;
    		int carry=0;
    	    for(int j=y.size()-1;j>=0;j--)
    		{
    			
    			int nbadd=(yy[j]-'0')*(temp1-'0')+carry;
    			carry=0;
    			if(nbadd>9){
    				carry=nbadd/10;
    				nbadd=nbadd%10;
    			}
    			
    			add.push_back(nbadd);
    		
    		}
    		if(carry>0)add.push_back(carry);
    		

    		
    		
    		int carry2=0;
    		for(int j=0;j<add.size();j++){
    			int sum=add[j]+total[j]+carry2;
    			carry2=0;
    			if(sum>9){
    				carry2=sum/10;
    				sum-=10;
    			}
    			total[j]=sum;		
    		}
    		if(carry2!=0){
    			total[add.size()]+=carry2;
    		}

    	
    	}
    	
    	int carry3=0;
    	for(int j=0;j<=600;j++)
    	{
    		total[j]+=carry3;
    		carry3=0;
    		if(total[j]>9)
    		{
    			carry3=total[j]/10;
    			total[j]=total[j]%10;
    		}
    	
    	}
    	
    	
    	 for(int j=total.size()-1;j>=0;j--){
    		if(total[j]==0)total.pop_back();
    		else break;
    		
    	}
    	
    	
    	for(int j=total.size()-1;j>=0;j--){
    		cout<<total[j];
    	}
    	
    	
    	
    	cout<<endl;
    	}
    	
    	
    	
    
    }
    
    
    
    return 0;
}
