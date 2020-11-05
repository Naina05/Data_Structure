#include<stdio.h>
#define SIZE 10
int S[SIZE];
int top=-1;

void push(int num)
{
    if(top==SIZE-1){
        printf("Overload Condition");
    }
    else
    {
        top++;
        S[top]=num;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow Contion");
    }
    else
    {
        printf("%d is popped out\n",S[top]);
        top--;
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",S[i]);
    }
    printf("\n");
}
void peek()
{
    printf("%d is peeked\n",S[top]);
}
int main()
{
   int choice,num;
   while(1)
   {
       //Menu driven program to implement stack
        printf("THIS IS A MENU FOR YOUR IMPLEMENTATION\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. PEEK\n");
        printf("5. EXIT\n");
        printf("**************************\n");
        printf("PLEASE ENTER YOUR CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the number:-");
                    scanf("%d",&num);
                    push(num);// to push 
                    break;
            case 2: pop();// to pop
                    break;
            case 3: display();//to display
                    break;
            case 4: peek();//to peek
                    break;
            case 5: return 0;
            
            default: printf("Invalid Input");
                    
        }
   }
}
