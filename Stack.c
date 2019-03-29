// Lets Master Stack
#include<stdio.h>

# define max 5

int top = -1;

int push(int x,int A[])
{

 if(top < max-1){
	 top++;
	 A[top]=x;
	}
 else{
 printf("Stack is full ! StackOVerflow \n");
 }

}

int pop()
{

if(top>= 0)
top-- ;

else
printf("stack is already empty !\n");

}

int isEmpty()
{
    if(top == -1)
    return 1;
    else
    return 0; 

}

int Top(int A[])
{
return A[top];
}

void Iterate(int top , int A[])
{
int x = top;
if(x <= -1)
{
printf(" \nEnd of Stack reached\n"); 

}
else
{
 int o = A[x];
 printf("%d ",o);
 x--;
 Iterate(x,A);
}

}

int main()
{
     int A[max];
     int ch = 0;
printf("1.Push a value\n2.Pop a value\n3.See Top of stack\n4.Show full stack\n");
printf("5.Exit\n");
do{
    int choice = 0,p,dummy=0 ;
   printf("Your choice pls :: ");
    scanf("%d",&choice);

 switch(choice)
    {
      case 1 :  printf("Enter number :: ");
		scanf("%d",&dummy);
 		push(dummy, A);
		break;
      case 2 :  printf("Popped out %d\n",A[top]);
		pop();
		break;
      case 3 :  p = Top(A);
		printf("Top of Stack : %d\n",p);
		break;
      case 4 :  printf("Stack :: ");
		Iterate(top,A);
		break;
      default : printf("Wrong choice \n");
		 break;
      case 5  : ch = 1;
                break;
	}


  }while(ch == 0);
return 0 ;
}
