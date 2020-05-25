#include<stdio.h>
#include<stdlib.h>

typedef struct node
    {

        int info;
        struct node *next;
    }N;

N *start,*ptr,*prev, *temp;


int n;

void deletefirstlist();  // deletes the 1st node of LL
void deletelastlist();   // deletes the last node of LL
void deletelist();       // deletes the node of LL from a user-input position

int main()
{

    start=NULL;   /* always initialize pointers within main(), not globally */
    prev=NULL;
    ptr=NULL;
    temp = NULL;
    /* Creating the singly linked list */
	int i,x;
    printf("enter the no of list elements\n");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        ptr= (N*)malloc(sizeof(N));

        if(prev != NULL)
            prev->next= ptr;

        printf("enter the %dth element\t",(i+1));
        scanf("%d",&x);
        ptr->info = x;
        ptr->next = NULL;

        if(start == NULL)
        {
            start=ptr;
        }

        prev = ptr ;
        }             /* linked list created*/

printf("the list elements are:\t");
ptr=start;
for(i=0;i<n;i++)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }




 deletefirstlist();
 deletelastlist();
 deletelist();

 return 0;
    }


    void deletefirstlist()
    {
        int i;
        temp = start;
        start = start->next;

        printf("the list after deleting the 1st node is:\t");

        ptr=start;
        while (ptr != NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
        printf("\n");
        start = temp; /* Restoring original LL for future */

    }

    void deletelastlist()
    {
        int i;

        prev= start;
        ptr=start->next;
        while(ptr->next != NULL)
        {
        	prev=ptr;
            ptr= ptr->next;
        }
	    temp = ptr;
        prev->next = NULL;

        printf("the list after deleting the last node is:\t");
        ptr=start;
        /* for(i=0;i<(n-1);i++)  - Possible, but prefer not to use 'for loop' in any Linked list program,
                                   esp deletion programs, as it will print a deleted output
                                   even though deletion may not have been done.
                                   Use while loop instead.   */

        while (ptr != NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
        printf("\n");
		prev->next = temp;  /* Restoring original LL for future */
    }


    void deletelist()
    {
        int i;
        int pos,k;
        printf("enter the random position to delete\n");
        scanf("%d",&pos);

        ptr = start;
        prev=start;
        k=1;
        while(k != pos)
        {
             prev =ptr;
             ptr= ptr->next;

             k++;
        }

        prev->next = ptr->next;

        printf("the list after deleting the %dth node is:\t",pos);
        ptr=start;
        for(i=0;i<(n-1);i++)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }

    }








