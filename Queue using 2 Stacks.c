// Implementation of Queue via Stacks 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 100000
// Two Stack implementation of Queue

int top1 = -1 , top2 = -1 ; 
long int stack1[max],stack2[max];
//choice = 1
void enqueue( long int x )
{ // printf("Enqueue invoked !\n");
    
        top1++;
        stack1[top1] = x;
}
// choice = 2 
void dequeue()
{
        if(top1 == 0 )
        {
            top1--; 
        }
        else
        {
                while(top1 > 0 )
                {
                    top2++; 
                    stack2[top2] = stack1[top1]; 
                    top1-- ;
                }
                top1--; 
                while(top2>-1)
                {
                    top1++; 
                    stack1[top1] = stack2[top2];
                    top2--; 
                }
        }
    }



void printS1()
{
    printf("%ld\n", stack1[0]); 
}

int main() {
    int a,ch;
    long int value=0 ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     scanf("%d",&a);
    do
    { a--;

      scanf("%d", &ch);

      switch(ch)
      {
          case 1 : 
                   scanf("%ld",&value);
                   enqueue(value);      
                   break;

          case 2 : dequeue();
                   break;

          case 3 :  
                    printS1();
                    break;

         default : break; 
      }

    
    }while(a>0);     
    return 0;
}
