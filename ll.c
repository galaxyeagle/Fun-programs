 #include<stdio.h>
#include<stdlib.h>
int main()
{

/* Creating a linked list */
struct node
{
  int info;
  struct node *link;
};

struct node *new1, *start, *ptr;
int n;
printf("enter the number of linked list elements\n");
scanf("%d",&n);
start=NULL;
ptr=NULL;
for(int i=0;i<n;i++)
{
new1=( struct node*)malloc(sizeof(struct node));
printf("enter the element\n");
scanf("%d",&new1->info);
new1->link = NULL;

	if(start==NULL)
	{
    start=new1;
    ptr=start;
	}
	else
	{
    ptr->link = new1;
    ptr=new1;
	}
}

/* Printing LL elements*/

printf("The linked list elements are :\n");
ptr=start;

while(ptr != NULL)
{
	printf("%d  ", ptr->info);
	ptr=ptr->link;
}



/*now finding the sum and average of all elements*/

char choice;
printf("\n Do you want to know the sum & average of all LL elements ? y/n \n");
scanf(" %c",&choice);
if (choice == 'y')
{
int sum=0, count=0;
ptr=start;
while(ptr != NULL)
{
    count=count+1;
    sum = sum + (ptr->info);
    ptr=ptr->link;
}

double avg=(float)sum/(float)count;
printf("the sum is:%d\n",sum);
printf("the average is:%f\n",avg);
}

printf("Thank you for running this program !");

return 0;
}


