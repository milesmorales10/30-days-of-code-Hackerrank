#include <bits/stc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          if(head == nullptr){
              return new Node(data);
          }

          Node *temp = head;
          while(temp->next != nullptr){
              temp = temp->next;
          }

          temp->next = new Node(data);
          return head;
      }


      void display(Node *start){
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main(){

	  Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
	mylist.display(head);

  return 0;

}
