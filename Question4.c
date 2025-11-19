#include<stdio.h>
#include<string.h>
int main(){
    char s[200];
    int i=0;
    printf("Enter message: ");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    while(s[i]!='\0'){
        char x=s[i];
        if(x>='a'&&x<='z'){
            x=x+3;
            if(x>'z'){
                x='a'+(x-'z'-1);
            }
            s[i]=x;
        }
        else if(x>='A'&&x<='Z'){
            x=x+3;
            if(x>'Z'){
                x='A'+(x-'Z'-1);
            }
            s[i]=x;
        }
        i++;
    }
    printf("%s",s);
    return 0;
}

