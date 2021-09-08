
#include<bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>
int maps[200][200];


struct mode{
	int node1;
	int node2;
	int weight;
		
};

bool comp(mode n1,mode n2){
	if(n1.weight<n2.weight)return 1;
	else if(n1.weight==n2.weight){
		if(n1.node1<n2.node1)return 1;
		else if(n1.node1==n2.node1){
			if(n1.node2<n2.node2)return 1;
			else return 0;
		}
		else return 0;
	
	}
	else return 0;
 
}
		
int main(){
	int cases;
	int now=0;
    cin>>cases;
    while(now++<cases){
    	cout<<"Case "<<now<<":"<<endl;
    	int n;
    	char temp;
    	cin>>n;
    		
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cin>>maps[j][i];
    			if(j<n-1)cin>>temp;
    		}
    	
    	}
    	
    	/*for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cout<<maps[j][i]<<" ";
    			
    		}
    		cout<<endl;
    	}
    	*/
    	
    	
    	
    	mode t[3000];	
    	
    	int nodenb=0;
    	for(int i=0;i<n;i++){
    		for(int j=i+1;j<n;j++){
    			if(maps[j][i]!=0){
    				t[nodenb].node1=i;
    				t[nodenb].node2=j;
    				t[nodenb].weight=maps[j][i];
    				nodenb++;
    			}
    		}
    	
    	}
   
		
    	sort(t,t+nodenb,comp);
		
		/*for(int i=0;i<nodenb;i++){
			cout<<t[i].node1<<" "<<t[i].node2<<" "<<t[i].weight<<endl;
		}
    	*/
    	
    	int nodecolor[n]={0};
    	int count=0;
    	int color=1;
    	for(int i=0;i<nodenb;i++){
			if(nodecolor[t[i].node1]==0&&nodecolor[t[i].node2]==0){
				nodecolor[t[i].node1]=nodecolor[t[i].node2]=color;
				color++;
				count+=2;
			}
			else if(nodecolor[t[i].node1]!=0&&nodecolor[t[i].node2]==0){
			
				nodecolor[t[i].node2]=nodecolor[t[i].node1];
				count++;
			}
			else if(nodecolor[t[i].node1]==0&&nodecolor[t[i].node2]!=0){
			
				nodecolor[t[i].node1]=nodecolor[t[i].node2];
				count++;
			}
			else if(nodecolor[t[i].node1]!=0&&nodecolor[t[i].node2]!=0&&nodecolor[t[i].node1]!=nodecolor[t[i].node2]){
				int n2color=nodecolor[t[i].node2];
				for(int j=0;j<n;j++){
					if(nodecolor[j]==n2color)nodecolor[j]=nodecolor[t[i].node1];
				}
			}
			else{
				continue;
			}
			//for(int j=0;j<n;j++)cout<<nodecolor[j]<<" ";
			cout<<char('A'+t[i].node1)<<"-"<<char('A'+t[i].node2)<<" "<<t[i].weight<<endl;
			
			
			
			
			bool same=1;
			for(int j=1;j<n;j++){
				if(nodecolor[j]!=nodecolor[0]){
					same=0;
					break;
				}
			}
			if(same==1)break;
			
			
		}
    	
    	
    	
    	
    	
    	
    	
    	
    	
    }
    
    
    
    return 0;
}
