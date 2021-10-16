#include<bits/stdc++.h>
using namespace std;
int nb[100000];
long long int total=0;
sorting(int l,int r){
	//cout<<l<<" "<<r<<"      ";
	long long int count=0;
	int mid=(l+r)/2;
	queue<int>left;
	queue<int>right;
	for(int i=l;i<=mid;i++){
		left.push(nb[i]);
		//cout<<left.front()<<" ";
		//left.pop();
	}
	//cout<<endl;
	for(int i=mid+1;i<=r;i++){
		right.push(nb[i]);
		
		//cout<<right.front()<<" ";
		//right.pop();
	}
	//cout<<endl;

	for(int i=l;i<=r;i++){
		if(left.size()==0){
			nb[i]=right.front();
			right.pop();
		}
		else if(right.size()==0){
			nb[i]=left.front();
			left.pop();
		}
		else if(right.front()<left.front()){
			nb[i]=right.front();
			right.pop();
			count+=left.size();
		}
		else{
			nb[i]=left.front();
			left.pop();
		}

	
	}
		/*for(int i=l;i<=r;i++){
			cout<<nb[i]<<" ";
		}
		*/
		total+=count;
		return count;
	
}



int mergesort(int l,int r){
	int count=0;
	if(l==r)return false;
	int mid=(l+r)/2;
	count+=mergesort(l,mid);
	count+=mergesort(mid+1,r);
	count+=sorting(l,r);
	//cout<<l<<" "<<r<<endl;
	
	return count;
	
}




int main(){
    int n;
    while(cin>>n,n){
    	for(int i=0;i<n;i++){
    		cin>>nb[i];
    	}
    	total=0;
    	int out=mergesort(0,n-1);
    	
    	
    	if(total%2==0)cout<<"Carlos "<<total<<endl;
    	else cout<<"Marcelo "<<total<<endl;
    }
    return 0;
}
