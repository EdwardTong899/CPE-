#include<bits/stdc++.h>
using namespace std;

long long int merge(int A[],int L,int M,int R){
	
	long long int count=0;

	vector<int>L_temp;
	vector<int>R_temp;
	

	for(int i=0;i<M-L+1;i++){
		L_temp.push_back(A[i+L]);
		
	}
	
	for(int i=0;i<R-M;i++){
		R_temp.push_back(A[i+M+1]);
		
	}
	
	while(R_temp.size()+L_temp.size()){
		if(R_temp.size()==0){
			A[L]=L_temp[0];
			//cout<<A[L];
			
			L++;
			L_temp.erase(L_temp.begin());
			
		}
		else if(L_temp.size()==0){
			A[L]=R_temp[0];
			count+=L_temp.size();
			//cout<<A[L];
			L++;
			R_temp.erase(R_temp.begin());
			
		}
		else if(L_temp[0]<=R_temp[0]){
		
			A[L]=L_temp[0];
			
			L++;
			L_temp.erase(L_temp.begin());
			
		}
		else{
			
			A[L]=R_temp[0];
			count+=L_temp.size();
			//cout<<A[L];
			L++;
			R_temp.erase(R_temp.begin());
		}

	}
	//cout<<endl;

	return count;
	
	
	
}


long long int merge_sort(int A[],int L,int R){
	long long int count=0;
	if(R>L){
		int M=(L+R)/2;
		//cout<<L<<" "<<M<<endl;
		count+=merge_sort(A,L,M);
		//cout<<M+1<<" "<<R<<endl;
		count+=merge_sort(A,M+1,R);
		count+=merge(A,L,M,R);
		
	}
	return count;
}



int main(){
    long long int a;
    int max1=0;
    while(cin>>a,a){
    	int A[a];
    	for(int i=0;i<a;i++){
    		cin>>A[i];
    		//cout<<A[i];
    	}
    	//cout<<"0"<<" "<<a-1<<endl;
    	long long int count=merge_sort(A,0,a-1);
		/*for(int i=0;i<a;i++){
			cout<<A[i];
		}
		*/
    	if(count%2==0)cout<<"Carlos "<<count<<endl;
    	else cout<<"Marcelo "<<count<<endl;
    }
    
    
    return 0;
}
