#include <stdio.h>
#include <string.h>
int main(){
	char word[4][11]={"hello","hi","how","hey"};
	int i,j;
	strcpy(word[2],"Watermelon");
	for(i=0;i<4;i++){
		printf("%s\n",word[i]);
		printf("%d\n",strlen(word[i]));
		for(j=0;word[i][j]!='\0';j++){
			printf(" %c\n",word[i][j]);
		}
	}
	return 0;
}
