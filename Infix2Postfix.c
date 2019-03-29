#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 10

int operator_top = -1 ;
char operator_stack[10];

void push2operator(char ch)
{
	if(operator_top < max-1)
	{
		operator_top++;
		operator_stack[operator_top] = ch;
	}

}

char popfromoperator()
{   char ch ;

	if(operator_top > -1)
	{
	    ch = operator_stack[operator_top];
		operator_top--;
		return ch;
	}
}


int priority(char ch)
{
	int p ; 
	if(ch == '+' || ch == '-')
		{ p =1 ; }
	else if(ch == '%' || ch == '*')
		{p = 2;}
	else
		{p = 3;}

return p;

}


void StackMasti(char ch)
{

 	 if(operator_top == -1)
 	 {
 	 	push2operator(ch);
 	 }

 	 else if(priority(ch) > priority(operator_stack[operator_top]))
 	 {
 	 	push2operator(ch);
 	 }

 	 else
 	 {  char x;
 	 	x = popfromoperator();
 	 	printf("%c", x);
 	 	StackMasti(ch);
 	 }

}


int main()
{    
	char str[10];
	
	printf("Please enter the String :: ");
	scanf("%s", str);
	printf("INFIX = %s ",str);
   
	for(int i=0 ; i< strlen(str) ; i++)
	{
		if(isalpha(str[i])){
			printf("%c",str[i]);
		}

		else
		{
			StackMasti(str[i]);
		}
	}

	while(operator_top>-1)
	{
		printf("%c" ,popfromoperator());
	}
	return 0;
}
