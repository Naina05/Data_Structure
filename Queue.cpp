#include<stdio.h>
#define MAX 10
int Q[MAX];
int front=-1,rear=-1;

void Enqueue(int num)//TO INSERT
{
    if(rear==MAX-1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        Q[rear]=num;
        rear++;
    }
}
void dequeue()//TO DELETE
{
    int num;
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {   
        num=Q[front];
        printf("%d is deleted\n",Q[front]);
        front++;
    }
}
void display()//TO DISPLAY
{
    int i;
    for(i=front;i<=rear-1;i++)
    {
        printf("Your elements are: %d",Q[i]);
    }
    printf("\n");
}
int main()
{
    int choice,num;
    //MENU DRIVEN PROGRAM
    do {
    {   
        printf("***************************************\n");
        printf("1:ENQUEUE\n");
        printf("2:DEQUEUE\n");
        printf("3:DISPLAY\n");
        printf("4:EXIT\n");
        printf("***************************************\n");
    }
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: //Enqueue
                printf("Enter your element:\n");
                scanf("%d",&num);
                Enqueue(num);
                break;
        case 2://Dequeue
                dequeue();
                break;
        case 3: //Display
                display();
                break;
        case 4://Exit
                return 0;
        default://Invalid Input
                printf("Your input is invalid\n");
    }
    } while(choice!=10);
    return 0;
}
