// 
#include<iostream>
using namespace std;

class Node{
 public:
 int val;
 Node* next;
 Node(int val){
    this->val = val;
    this->next = NULL;
 }
};

int main(){
  Node* a = new Node(3);
  Node* b = new Node(4);
  Node* c = new Node(5);
  Node* d = new Node(6);
  a->next = b;
  b->next = c;
  c->next = d;
  Node* temp = a;
  cout<<temp->val<<endl;
  while(temp != NULL){
    cout<<temp->val<<" ";
    temp = temp->next;
  }
}