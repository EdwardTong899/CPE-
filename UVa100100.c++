#include<bits/stdc++.h>
using namespace std;
char table[52][52];
char table2[52][52];
int c,l;
int d[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
bool findword(int x,int y,string word,int wordindex,int dir){
		
		if(x<c&&x>=0&&y<l&&y>=0&&table[x][y]==word[wordindex]){
			//cout<<x<<" "<<y<<" ";
			wordindex++;
			if(findword(x+d[dir][0],y+d[dir][1],word,wordindex,dir)) return 1;		

		}
		//cout<<"wordindex :"<<wordindex<<endl;
		if(word.size()==wordindex) return 1;
		else return 0;
		
}

int main(){
    int a;
    cin>>a;
    while(a--){
    	
    	cin>>c>>l;
    	
    	for(int i=0;i<c;i++){
    		for(int j=0;j<l;j++){
    			char temp;
    			cin>>temp;
    			if(int(temp)<97){
    				temp=char(int(temp)+32);
    			}
    			table[i][j]=temp;
    		}
    	}
    	
    	/*for(int i=0;i<c;i++){
    		for(int j=0;j<l;j++){
    			cout<<table[i][j];
    		}
    		cout<<endl;
    	}
    	*/
    	int wordsNB;
    	cin>>wordsNB;
    	while(wordsNB--){
    		
    		string word;
    		cin>>word;
    		//cout<<word<<endl;
    		for(int i=0;i<word.size();i++){
    			   	if(int(word[i])<97){
    				word[i]=char(int(word[i])+32);
    			}
    		}
    	for(int i=0;i<c;i++){
    		for(int j=0;j<l;j++){
    			if(table[i][j]==word[0]){
    				int wordX[word.size()]={0};
    				for(int ii=0;ii<c;ii++){
    					for(int jj=0;jj<l;jj++){
    						table2[ii][jj]=table[ii][jj];
    					}
    				}
    				for(int dir=0;dir<8;dir++){
    					int wordindex=0;
    					if(findword(i,j,word,wordindex,dir)){
    						
    						cout<<i+1<<" "<<j+1<<endl;
    						
    						i=1000,j=10000;
    						
    						break;
    					}
    					
    				}
    			}
    		
    		}
    	}
    		
    		
    	}
    	
    	
    	
    	if(a)cout<<endl;

    	
    }
    
    
    return 0;
}
