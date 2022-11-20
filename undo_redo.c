/*The Question is to print the final string after performing undo and redo operation on it. In this question, "*" represents UNDO operation and "#"
represents REDO operation.

Sample Testcase:

input : asd**#gik***#

output : asg
*/

//SOLUTION IN C USING STACKS

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int max=100;
char stack1[100];
int top=-1;
int isFull(){
    if(top==max){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(char d){
    if(isFull()){
        printf("STACK IS FULL");
        exit(0);
    }
    else{
        stack1[++top]=d;
    }
}
char pop(){
    if(isEmpty()){
        printf("STACK IS EMPTY");
        exit(0);
    }
    else{
        return stack1[top--];
    }
}
int main(){
    char a[100],b[100];
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(isalpha(a[i])){
            push(a[i]);
        }
        else if(a[i]=='*'){
            char t=pop();
        }
        else if(a[i]=='#'){
            ++top;
        }
        else{
            printf("INVALID INPUT");
        }
    }
    int j=top;
    for(int i=0;i<=j;i++){
        b[i]=pop();
    }
    for(int i=j;i>=0;i--){
        printf("%c ",b[i]);
    }
    return 0;
}