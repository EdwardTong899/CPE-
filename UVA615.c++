#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	int tree[1000]={0};
	bool istree=1;
	int root;
	int cases=1;
    while(cin>>a>>b,a!=-1&&b!=-1){
    	if(a==0&&b==0){                                  // output and reset
    		if(!istree)cout<<"Case "<<cases<<" is not a tree."<<endl;
    		else cout<<"Case "<<cases<<" is a tree. Root is "<<root<<"."<<endl;
    		cases++;
    		
    		
    		for(int i=0;i<1000;i++)tree[i]=0;//reset tree;
    		istree=1;
    	}
    	
    	if(tree[b]!=0)istree=0;  //inspect only have one father
    	else tree[b]=a;
    	int temp=b;
    	
    	for(int i=0;i<1000;i++){  //inspect cycle;
    		 root=temp;
    		 temp=tree[temp];
    		 if(temp==0)break;
    		 if(temp==b)istree=0;
    	}
    	
    }
    return 0;
}
