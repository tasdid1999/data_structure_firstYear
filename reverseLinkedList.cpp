#include<bits/stdc++.h>
using namespace std;

struct node{

   int data;
   struct node *link;


};

struct node *createLinkedList(int a[],int size);

void reverseLinkedList(struct node *head);

int main()
{
    int a[] = {10, 21, 17,20,7,3};

    struct node *head;

    head = createLinkedList(a,sizeof(a)/sizeof(a[0]));

    reverseLinkedList(head);
}

struct node *createLinkedList(int a[],int size)
{
    struct node *temp = NULL , *head = NULL , *current = NULL;

    for(int i = 0; i< size; i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));

        temp->data = a[i];

        temp->link = NULL;

        if(head == NULL)
        {
            head = temp;
            current = temp;
        }

        else{

            current->link = temp;

            current = current->link;
        }
    }

    return head;

}

void reverseLinkedList(struct node *head){

  struct node *prev = NULL, *current = head , *next = NULL;

  while(current != NULL)
  {
      next = current->link;
      current->link = prev;

      prev = current ;

      current = next;
  }

   head = prev;

   while(head != NULL)
   {
       printf("%d ",head->data);
       head = head->link;
   }


}


