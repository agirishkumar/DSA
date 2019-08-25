#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
}head;

void insert_end(int num)
{
	struct node *ptr = (struct node)malloc(sizeof(struct node*));
	struct node *tmp = (struct node)malloc(sizeof(struct node*));
	if(head==NULL)
	{
		*head = (struct node)malloc(sizeof(struct node*));
		head->data = num;
		head->link=NULL;
	}
	else
	{
		ptr->data=num;
		ptr->link=NULL;
		tmp=head;
		while(tmp->link!=NULL)
		{
			tmp=tmp->link;
		}
		tmp->link=ptr;	
	}
}

void display()
{
	struct node *tmp = (struct node)malloc(sizeof(struct node*));
	if(head==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
        tmp=head;
        while(tmp->link!=NULL)
        {
            printf("%d",tmp->data);
        }
        printf("%d",tmp->data);
    }
}
int main()
{
    int choice,n;

    do
    {
        printf("Menu: \n 1. Insert in front\n 2. Display");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                    printf("Enter the data:");
                    scanf("%d",&n);
                    insert_end(n);

            case 2: display();
        }
    } while (choice<=2);
    
}

