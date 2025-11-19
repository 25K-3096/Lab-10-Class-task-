#include <stdio.h>
#include <string.h>

int main(){
	int len;
	char pass[20];
	int ucase,dig,spec,i;
	do{
	ucase=0;
	dig=0;
	spec=0;
	printf("Enter your password: ");
	scanf("%s",&pass);
	len =strlen(pass);
	while(len<8){
		printf("password must be atleast 8 characters\n");
		printf("Enter your password: ");
		scanf("%s",&pass);
		len =strlen(pass);}
	for(i=0;i<=len;i++){
		if(pass[i]>=65 && pass[i]<=90){
			ucase=1;
		}
		else if(pass[i]>=48 && pass[i]<=57){
			dig=1;
		}
		else if(pass[i]>=33 && pass[i]<=47){
			spec=1;
		}
		}
		if(ucase==0){
			printf("Password must have atleast one uppercase letter\n");
		}
		if(dig==0){
			printf("Password must have atleast one digit\n");
		}
		if(spec==0){
			printf("Password must have atleast one special character\n");
		}
	}while(ucase==0||dig==0||spec==0);
	printf("Password successfully validated");
	return 0;
}
