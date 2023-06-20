#include<stdio.h>
#include<stdlib.h>

  struct node
  { 
    int data;
    struct node *next;
  };
  
struct node *head,*newnode,*temp;
int count=0;

void createnode()
{

        head=NULL;
        int choice,count=0;
        while(choice)
        {
            newnode=(struct node*) malloc(sizeof(struct node));
            printf("enter the data:");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            if(head==NULL)
            { 
              head=temp=newnode;
            }
            else
            { 
              temp->next=newnode;
              temp=newnode;
            }
            printf("do you want to continue(0,1)");
            scanf("%d",&choice);
         }

}

void display()

  {
        count=0;
        temp=head;
        while(temp!=NULL)
        {
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
        }
        printf("\n no of nodes in linked list=%d",count);
        printf("\n");

  }


void insertAtbeginning()

  { 

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter Data at Beginning: ");
        scanf("%d", &newnode->data);

        newnode->next = head;
        head = newnode;

        /*temp=head;
       
        while(temp!=0)
        {
            printf("%d ", temp->data);
            temp=temp->next;

            count++;
        }*/
        printf("\n");


   }



   void insertAtend()

   {


            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter Data at you want to insert at end: ");
            scanf("%d", &newnode->data);

            newnode->next =0;

            temp=head;
            while(temp->next!=0)
            {
                temp=temp->next;
                
            }
            temp->next=newnode;  

           /*temp=head;
            while(temp!=0)
                {
                printf("%d ", temp->data);
                temp=temp->next;
                count++;
                }*/
                printf("\n");

           // printf("no of nodes after insertion at end=%d",count);

   }


void insertAtposition()
{ 
  
          int pos,i=1;
          printf("\nEnter the pos: ");
            scanf("%d", &pos);

            if (pos>count)
            {
                printf("invalid position");
            }
            
            else
            { 
                temp=head;
                while (i<pos-1)
                {
                temp=temp->next;
                i++;
                }
            }   
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("enter data:");
            scanf("%d",&newnode->data);
            newnode->next=temp->next;
            temp->next=newnode;


            temp=head;
            count=0;

            /*while(temp!=0)
                {
                    printf("%d ", temp->data);
                    temp=temp->next;

                    count++;
                }*/
         printf("\n");

        // printf("no of nodes after insertion at given position=%d",count);

 }


int getlength()
{ 
        temp=head;
        int count=0;

        while(temp!=NULL)
        {
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
        }
        printf("\nno.of nodes in linked list=%d",count);
        printf("\n");
        //return count;

  }

  void deletefrombeginning()
  { 
    
            if (head==0)
            {
                printf("list is empty");
            }

            else
            {
            
            head=head->next;
            free(temp);
            }


            temp=head;
            printf("\ndata after deletion: ");

            /*while(temp!=0)
            {
                printf("%d ", temp->data);
                temp=temp->next;

                count++;
            }*/
            printf("\n");

           // printf("no of nodes after deletion at begging=%d",count);

   }


void deletefromEnd()
{ 
           
            count=0;


              struct node *prevnode;
              temp=head;

              while (temp->next!=0)
              {
                  prevnode=temp;
                  temp=temp->next;
              }
              
              if (temp==head)
              {
                  head=0;
              }

              else
              { 
                  prevnode->next=0;
              }
              

              free(temp);


              temp=head;
              printf("\ndata after deletion: ");

              /*while(temp!=0)
              {
                  printf("%d ", temp->data);
                  temp=temp->next;

                  count++;
              }*/
              printf("\n");

             // printf("no of nodes after deletion at end=%d",count);

   }


   void deleteAtposition()
   { 

                struct node *nextnode;
                int pos, i=1;
                temp=head;
                printf("enter position: ");
                scanf("%d",&pos);

                while ((i<pos-1))
                {
                    temp=temp->next;
                    i++;
                }
                
                nextnode=temp->next;
                temp->next=nextnode->next;
                free(nextnode);


                temp=head;
                printf("\ndata after deletion  at specific pos: ");

                while(temp!=0)
                {
                    printf("%d ", temp->data);
                    temp=temp->next;

                    count++;
                }
                printf("\n");

               // printf("no of nodes after deletion=%d",count);

   }


void main()
{ 
     int ch=1;
     do
     {
      printf("enter choice: \n 1-create node\n 2-display\n 3-insert at beginning\n 4-insert at end\n 5-insert at given position\n 6-get length\n 7-delete at beggining\n 8-delete at End\n 9-delete at given position\n");
      scanf("%d",&ch);

      switch (ch)
      {
      case 1: createnode();
        break;

      case 2: display();
        break;
    
       case 3: insertAtbeginning();
        break;

    case 4: insertAtend();
        break;

    case 5: insertAtposition();
        break;

    case 6: getlength();
        break;

    case 7: deletefrombeginning();
        break;

    case 8: deletefromEnd();
        break;

    case 9: deleteAtposition();
        break;

    default:printf("invalid choice!!");
  }
 
  } 
  while (ch!=0);
}
    