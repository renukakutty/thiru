#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ele,bsize;
struct node
{
int data;
struct node*next;
};
struct node*a[20],*newnode;
void get();
void openhash();
void hfunction();
void del();
void display();
void main()
{
int choice;
clrscr();
openhash();
do
{
printf("\n1.INSERT 2.DELETE 3.DISPLAY 4.EXIT");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
get();
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
exit(0);
}
}while(choice<=4);
}
void openhash()
{
int i;
printf("\nEnter the bucket size:");
scanf("%d",&bsize);
for(i=0;i<bsize;i++);
{
a[i]=(struct node*)malloc(sizeof(struct node));
a[i]=NULL;
}
}
void get()
{
printf("\nEnter the element to be inserted:");
scanf("%d",&ele);
hfunction();
}
void hfunction()
{
struct node*temp;
int hvalue;
newnode=(struct node*)malloc(sizeof(struct node));
temp=(struct node*)malloc(sizeof(struct node));
hvalue=ele%bsize;
printf("\nThe hasfhfunction of%d",ele,hvalue);
newnode->data=ele;
newnode->next=NULL;
if(a[hvalue]==NULL)
{
a[hvalue]=newnode;
return;
}
else
{
temp=a[hvalue];
while(temp->next!=NULL)
temp=temp->next;
temp->next=newnode;
}
}
void del()
{
int deldata,hvalue,flag=0;
struct node*temp,*delptr;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data to be deleted:");
scanf("%d",&deldata);
hvalue=deldata%bsize;
temp=a[hvalue];
if(temp->data==deldata)
{
delptr=a[hvalue];
a[hvalue]=a[hvalue]->next;
flag=1;
}
else
{
while(temp!=NULL)
{
if(temp->next->data==deldata)
{
delptr=temp->next;
temp->next=temp->next->next;
flag=1;
}
temp=temp->next;
}
}
free(delptr);
if(flag==0)
printf("\nElement not found");
}
void display()
{
struct node*temp;
int i;
temp=(struct node*)malloc(sizeof(struct node));
for(i=0;i<bsize;i++)
{
temp=a[i];
if(temp==NULL)
{
printf("\nA[%d]:NULL",i);
}
else
{
printf("\nA[%d]:",i);
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;
}
printf("NULL");
}
}
}

