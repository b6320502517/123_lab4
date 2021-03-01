#include<stdio.h>
int main(){
	int n=1,i,j,k,l=1;
	if(n>0&&n<100)
		scanf("%d",&n);
	char x[n][50];
	for(i=0;i<n;i++){
		scanf(" %[^\n]s",x[i]);
	}
	for(j=0;j<n;j++){
		for(i=0;x[j][i]!='\0';i++){
			if(x[j][i]>='A'&&x[j][i]<='E'){
				if(x[j][i]=='A'){
					if(l==1)
						l=1;
					else if(l==2)
						l=3;
					else if(l==3)
						l=2;
					else
						l=4;
				}
				else if(x[j][i]=='B'){
					if(l==1)
						l=4;
					else if(l==2)
						l=2;
					else if(l==3)
						l=3;
					else
						l=1;
				}
				else if(x[j][i]=='C'){
					if(l==1)
						l=3;
					else if(l==2)
						l=4;
					else if(l==3)
						l=1;
					else
						l=2;
				}
				else if(x[j][i]=='D'){
					if(l==1)
						l=2;
					else if(l==2)
						l=1;
					else if(l==3)
						l=4;
					else
						l=3;
				}
				else if(x[j][i]=='E'){
					if(l==1)
						l=4;
					else if(l==2)
						l=3;
					else if(l==3)
						l=2;
					else
						l=1;
				}

		}
		else
			break;
		
		}
		printf("%d\n",l);
	}
	
	return 0;
}
