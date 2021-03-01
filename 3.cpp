#include<stdio.h>
#include<string.h>
int main(){
	char x[200] , y[200];
	int i,j,k=0;
	scanf("%[^\n]s",x);
	for(i=0;x[i]!='\0';i++){
		if(x[i]==' '){
			break;
		
		}
		if(x[i]!=x[i+1]){
			y[k]=x[i];
			k++;
			
		}
	}
	
	printf("%s",y);
	return 0;
}
