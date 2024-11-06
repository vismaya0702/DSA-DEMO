#include<stdio.h>
int a[20],s,f=-1,r=-1,item,opt;
void Enqueue(int);
void Dequeue();
void Display();

void main()
{

printf("Enter the size of the queue :");
scanf("%d",&s);
do 
{
printf(" \n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n");
printf("\n Enter the option :");
scanf("%d",&opt);
switch(opt)
{
case 1 : printf("Enter the item to be inserted : ");
         scanf("%d",&item);
         Enqueue(item);
         break;
case 2 : Dequeue();
         break;
case 3 : Display();
         break;
case 4 : break;
Default :printf("Invalid option");
}
} while(opt!=4);


}
void Enqueue(int item)
{
if (r==s-1)
{
printf("Queue is full");
}
else if (r==-1)
{
f=0;
r=0;
a[r]=item;
}
else
{
r++;
a[r]=item;
}
}
void Dequeue()
{
    if(f==-1)
    printf("Queue is empty");
    else if(f==r)
    {
        printf("Deleted element is : %d",a[f]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("Deleted element is %d",a[f]);
        f++;
    }
}
void Display()
{
    int i;
    if (f==-1)
    {
        printf("Queue is empty");
        
    }else
    {
        for (i=f;i<=r;i++)
        printf("%d \t",a[i]);
    }
}