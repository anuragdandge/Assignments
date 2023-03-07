#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int top=-1, j=0;
char stack[100];
void push(char a)
{
  if(top==19)
    printf("list is full ");
  else
    top++;
    stack[top]=a;
}
char pop()
{
  char item;
  if(top==-1)
   {
        printf("stack is empty");
        return 0;
   }
   else
   { item=stack[top];
     top--;
     return item;
   }
}
int isoperator(char a)
{
   if(a=='+'||a=='-'|| a=='*'||a=='/'||a=='^')
      return 1;
   else
      return 0;
}
int precedance(char z)
{
    if(z=='^')
      return 3;
    else if(z=='*'||z=='/')
      return 2;
    else if(z=='+'||z=='-')
      return 1;
    else
      return 0;

}
void infix_postfix(char *inf, char *pos)
{
  int i=0;
  char h, item ;
  while(inf[i]!='\0')
  {
  	printf("\n");
  	printf("in while loop ....1\n");
  	item=inf[i];
  	printf("item = %c\n",inf[i]);
    if(isdigit(item)||isalpha(item))
    {
       pos[j]=item;
       printf("in if(isdigit()) pos[%d] = %c\n",i,item);
       j++;
    }
    else if(item=='(')
    {
        printf("in 1st else if item== ( \n");
    	push(item);
	}
    else if(isoperator(item))
    {
    	printf("in 2nd else if isoperator(item) \n");
        h=pop();
        printf("h = %c \n",h);
        while(h!='('&&precedance(item)<=precedance(h))
        {
           pos[j]=h;
           j++;
           printf("pos[%d] = %c \t ",j,h);
           h=pop();
           printf(" h = %c \n",h);
        }
        push(h);
		push(item);
		printf("item = %c and h = %c is pushed \n",item,h);
    }
    else if(item==')')
    {
       printf("in 3rd else if item == )");
       h=pop();
       printf("h = %c \n",h);
       while(h!='(')
       {
         pos[j]=h;
         printf(" pos[%d] = h \t",j,h);
         j++;
         h=pop();
		 printf("h = %c\n",h);
       }
    }
    else
     printf("invalid expression ");
    i++;
  }

}

int main()
{
  int l;
  char infix[100], postfix[50];
  printf("enter infix expression");
  gets(infix);
  printf("\n");
  puts(infix);
  strcat(infix,")");
  push('(');
  infix_postfix(infix, postfix);
  int i;
  printf("\n");
  printf("\n Infix to Postfix \n");
    for(i=0;i<=j;i++)
      printf("%c",postfix[i]);
 printf("\n Infix to Prefix \n");
for(i=j;i>=0;i--)
      printf("%c",postfix[i]);


  return 0;
}
