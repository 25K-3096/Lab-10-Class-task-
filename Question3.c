#include<stdio.h>
#include<string.h>
int main(){
    char s[200];
    int v=0;
    int c=0;
    int d=0;
    int sp=0;
    int i=0;
    printf("Enter string: ");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    while(s[i]!='\0'){
        char x=s[i];
        if(x==' '){
            sp++;
        }
        else if(x>='0'&&x<='9'){
            d++;
        }
        else if(strchr("aeiouAEIOU",x)!=NULL){
            v++;
        }
        else if((x>='a'&&x<='z')||(x>='A'&&x<='Z')){
            c++;
        }
        i++;
    }
    printf("Vowels: %d\n",v);
    printf("Consonants: %d\n",c);
    printf("Digits: %d\n",d);
    printf("Spaces: %d\n",sp);
    return 0;
}

