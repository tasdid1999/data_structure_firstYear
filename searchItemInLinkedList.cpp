#include<bits/stdc++.h>
using namespace std;

struct node{

   int data;
   struct node *link;


};

struct node *createLinkedList(int a[] , int sz)
{
    struct node *head = NULL, *temp = NULL, *current = NULL;



    for(int i = 0; i< sz; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));

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

int searchLinkedList(struct node *head , int value)
{
    int index = 1;


    while(head != NULL)
    {
        if(head->data == value)return index;

        index++;
        head = head->link;
    }
}

int main()
{
    int a[] = {1,20, 17 , 13 ,2};

    struct node *head;
    head = createLinkedList(a,5);

    printf("%d\n",searchLinkedList(head,2));

}
