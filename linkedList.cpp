#include<bits/stdc++.h>
using namespace std;


struct node *createLinkedList(int a[] , int sz);

struct node{

   int data;
   struct node *link;

};

int main()
{
    int a[] = {1 , 7 , 5, 8 ,10 , 15};

    struct node *head;

    head = createLinkedList(a,6);

    while(head != NULL)
    {
        printf("%d ",head->data);

        head = head->link;

    }



}



struct node *createLinkedList(int a[] , int sz){

     struct node *head = NULL , *temp = NULL , *current = NULL;

     for(int i = 0; i < sz; i++)
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
