#include<stdio.h>
#include<string.h>
int main(){
    char e[100];
    int i=0;
    int pos=-1;
    printf("Enter email: ");
    scanf("%s",e);
    for(i=0;i<strlen(e);i++){
        if(e[i]=='@'){
            pos=i;
        }
    }
    if(pos==-1){
        printf("Invalid");
    }
    else{
    	printf("Your domain is: ");
        for(i=pos+1;i<strlen(e);i++){
            printf("%c",e[i]);
        }
    }
    return 0;
}

