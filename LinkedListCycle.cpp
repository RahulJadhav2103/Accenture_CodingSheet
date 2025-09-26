#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int new_data)
    {
        this->data=new_data;
        this->next=nullptr;
    }
};
bool getMiddle(Node* head)
{
    Node* slow_ptr=head;
    Node* fast_ptr=head;
    while(fast_ptr !=NULL && fast_ptr->next !=NULL)
    {
      fast_ptr=fast_ptr->next->next;
      slow_ptr=slow_ptr->next;
      if(slow_ptr==fast_ptr)
      {
        return true;
      }
    }
    return false;
}

int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next=new Node(70);
    head->next->next->next->next = head;

    if(getMiddle(head))
    {
        cout<<"Contain Cycle";
    }
    else
    {
        cout<<"Not Contain Cycle";
    }
    return 0;
}