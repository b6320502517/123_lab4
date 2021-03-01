#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	  char s[1000] , d[11][5]={"i", "of", "the","on", "at", "for", "with", "a", "an" , "in","and" } ;
  char *m;
  int i=0,j,k=0;
  scanf("%[^\n]s",s);
  m= strtok(s," ");
  while(m != NULL) {
        for(j=0;j<11;j++)
          if(strcmp(m,d[j]))
            k++;
        if(k==11||i==0){
        	if((m[0]>='a'||m[0]>='A')&&(m[0]<='z'||m[0]<='Z')||m[0]==' ')
        		printf("%c",toupper(m[0]));
		}
          
    m = strtok(NULL," ");
    i++, k=0;
}
return 0;
}
