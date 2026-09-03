//aanchal
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top=-1;

void push(char c){stack[++top]=c;}
char pop(){return stack[top--];}
char peek(){return stack[top];}
int isEmpty(){return top==-1;}

int precedence(char c){
if(c=='^')return 3;
if(c=='*'||c=='/')return 2;
if(c=='+'||c=='-')return 1;
return 0;
}

void infixToPostfix(char infix[],char postfix[]){
int i=0,j=0;
char c;
while(infix[i]!='\0'){
c=infix[i];
if(isalnum(c))postfix[j++]=c;
else if(c=='(')push(c);
else if(c==')'){
while(!isEmpty()&&peek()!='(')postfix[j++]=pop();
if(!isEmpty()&&peek()=='(')pop();
}
else{
while(!isEmpty()&&precedence(peek())>=precedence(c)&&peek()!='(')postfix[j++]=pop();
push(c);
}
i++;
}
while(!isEmpty())postfix[j++]=pop();
postfix[j]='\0';
}

void reverse(char exp[]){
int n=strlen(exp);
for(int i=0;i<n/2;i++){
char t=exp[i];
exp[i]=exp[n-1-i];
exp[n-1-i]=t;
}
}

void swapBrackets(char exp[]){
for(int i=0;exp[i]!='\0';i++){
if(exp[i]=='(')exp[i]=')';
else if(exp[i]==')')exp[i]='(';
}
}

void infixToPrefix(char infix[],char prefix[]){
char rev[MAX],post[MAX];
strcpy(rev,infix);
reverse(rev);
swapBrackets(rev);
top=-1;
infixToPostfix(rev,post);
strcpy(prefix,post);
reverse(prefix);
}

int main(){
char infix[MAX],postfix[MAX],prefix[MAX];
printf("Enter infix expression: ");
scanf("%s",infix);

top=-1;
infixToPostfix(infix,postfix);
printf("Postfix: %s\n",postfix);

top=-1;
infixToPrefix(infix,prefix);
printf("Prefix: %s\n",prefix);

return 0;
}