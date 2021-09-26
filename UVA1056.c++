#include<bits/stdc++.h>
using namespace std;
int maps[50][50];
int color[50];
int degree[50];

int bfs(int index,int m){
	for(int i=0;i<m;i++){
		degree[i]=0;
	}
	
    queue<int>q1;
    q1.push(index);
    	
    while(q1.size()){
    	int now=q1.front();
    	for(int i=0;i<m;i++){
    		if(maps[i][now]!=0&&degree[i]==0){
    			q1.push(i);
    			degree[i]=degree[now]+1;
    		}
    	}
    		q1.pop();
    	}
	degree[index]=1;
	int max=0;
	for(int i=0;i<m;i++){
		if(degree[i]==0)return 0;
		if(degree[i]>max&&i!=index)max=degree[i];
	}

	
	return max;

}





int main(){
	
	int m,n;
	int cases=0;
	while(cin>>m>>n,m&&n){
		cout<<"Network "<<++cases<<": ";
		for(int i=0;i<m;i++){
			color[i]=0;
			degree[i]=0;
			for(int j=0;j<m;j++){
				maps[i][j]=0;
			}
		
		}
    	map<string,int>table;
    	int index=0;
    	for(int i=0;i<n;i++){
    		string n1,n2;
    		cin>>n1>>n2;
    		if(table.find(n1) == table.end()){
    			table[n1]=index;
    			index++;
    		}
    		if(table.find(n2) == table.end()){
    			table[n2]=index;
    			index++;
    		}
    		maps[table[n2]][table[n1]]=1;
    		maps[table[n1]][table[n2]]=1;
	
    	}
    	   /*for(int i=0;i<m;i++){
    			for(int j=0;j<m;j++){
    				cout<<maps[i][j]<<" ";
    			}
    			cout<<endl;
    		}
    		*/
    	int max=0;
    	int nodedeg;
    	bool disconn=0;
    	for(int i=0;i<m;i++){
    		nodedeg=bfs(i,m);
    		if(nodedeg==0){
    			cout<<"DISCONNECTED"<<endl;
    			disconn=1;
    			break;
    		}
    		if(nodedeg>max)max=nodedeg;
    		
    	}
    	if(!disconn)cout<<max<<endl;	
    	cout<<endl;
    }
    return 0;
}
