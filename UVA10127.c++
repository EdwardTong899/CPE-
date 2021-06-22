#include<bits/stdc++.h>
using namespace std;
int n;
int count;
int find(int nb,int count){
	count+=1;
	nb=nb*10+1;
	if(nb%n==0){
		return count;
	}
	else{
		nb=nb%n;
		find(nb,count);
		
	}

}



int main(){
    int count=0;
    while(cin>>n){
    	//cout<<n;
    	count=0;
    	int nb=0;
    	cout<<find(nb,count)<<endl;	
    }
    return 0;
}
