#include<stdio.h>
#include<string.h>
int main(){
    char n[5][50];
    int m[5];
    int i=0;
    int max=0;
    int idx=0;
    int sum=0;
    for(i=0;i<5;i++){
        printf("Enter name of student %d: ",i+1);
        scanf("%s",n[i]);
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&m[i]);
    }
    printf("Student Marks:\n");
    printf("Name        Marks\n");
    printf("----------------------\n");
    for(i=0;i<5;i++){
        printf("%-10s %d\n",n[i],m[i]);
    }
    for(i=0;i<5;i++){
        if(m[i]>max){
            max=m[i];
            idx=i;
        }
        sum=sum+m[i];
    }
    printf("\n");
    printf("Top Student: %s with %d marks\n",n[idx],m[idx]);
    printf("Class Average: %.2f\n",sum/5.0);
    return 0;
}

