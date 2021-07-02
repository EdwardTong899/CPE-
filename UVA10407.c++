#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
    	int first;
    	cin>>first;
    	if(first==0)break;
    	vector<int>list;
    	list.push_back(first);
    	while(cin>>first,first){
    		list.push_back(first);
    	}
    	vector <int> diff;
    	for(int i=1;i<list.size();i++){
    		int temp;
    		temp=abs(list[0]-list[i]);
    		diff.push_back(temp);
    	}
		while(1){
			if(diff.size()==1)break;
			int min=0;
			for(int i=1;i<diff.size();i++){
				if(diff[i]<diff[min])min=i;
			}


			for(int i=0;i<diff.size();i++){
				if(i==min)continue;
				diff[i]=diff[i]%diff[min];
				if(diff[i]==0){
					diff.erase(diff.begin()+i);
					if(i<min)min--;	
				}
			}
		}
		cout<<diff[0]<<endl;

    }
    
    return 0;
}
