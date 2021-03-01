#include<stdio.h>
#include<string.h>
int main(){
	char x[4][50];
	int i,j,k,l,m=0;
	int f[4]={};
	for(i=0;i<4;i++)
		scanf(" %[^\n]s",x[i]);
	l=strlen(x[0]);
	for(i=0;i<4;i++){
			if(l<strlen(x[i])){
				l=strlen(x[i]);
				m=i;
		}			
	}
	
	for(i=0;i<4;i++){
		if(strlen(x[i])==l){
			for(j=0;j<26;j++){
				if((x[i][0]==65+j)||(x[i][0]==97+j))
					f[i]=j+1;
			}
		}
	}
	k=f[0];
	for(i=0;i<4;i++){
		if(k>f[i]){
				l=f[i];
				m=i;

		}			
	}
	for(j=0;j<10;j++)
		printf("%c",x[m][j]);
		
	return 0;
}
