#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *next; 
}*top = NULL;

void push(int d){
    struct stack *new;
    new = (struct stack*)malloc(sizeof(struct stack));
    new -> data = d;
    if(top == NULL){
        new -> next = NULL;
        top = new;
    }
    else{
       new -> next = top;
       top = new;
    }
    
}
	
int display(){
	
	if(top == NULL){
		printf("stack is empty");
	}
	else{
	    struct stack *temp = top;
	    
	    while(temp->next != NULL){
	    printf("%d\t",temp->data);
	        temp = temp -> next;
	    }
	    printf("%d\tNULL",temp->data);
	    
	}
	
}

int main()
{
	int d,ch,k;
	while (1)
    {printf("1. Push\n2.Display\n3. Exit\n");
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        	
        	case 1:
        		printf("enter the data to be added to the stack");
        		scanf("%d",&d);
        		push(d);
        		break;
        	case 2:
        		k = display();
        		break;
        	case 3:
        		exit(0);
        	default:
        		printf("enter a valid number between 1,2 and 3");
						}}
						return 0;
}
