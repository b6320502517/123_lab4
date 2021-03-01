#include<stdio.h>
#include<string.h>
int main(){
	char x[200] , y[200];
	int i,j,k=0;
	scanf("%[^\n]s",x);
	for(i=0;i<strlen(x);i++){
		if(x[i]!=x[i+1]){
			y[k]=x[i];
			k++;
			printf("%c",x[i]);
			//printf("%c\n",y[k]);
		}
	}

	//for(j=0;j<i;j++)
		//printf("\n%c",y[j]);
	return 0;
}
