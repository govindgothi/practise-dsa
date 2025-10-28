#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class MyLinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    MyLinkedList()
    {
        head = tail = NULL;
        size = 0;
    }

    int get(int index)
    {
        return 0;
    }

    void addAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            tail = head = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void addAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            tail = head = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void addAtIndex(int index, int val)
    {
        if(index>size) return;
        else{
            Node* temp = head ;
            int i = 1;
            while (index>=i)
            {   
                if(index == i){
                    cout<<temp->val;
                }
                temp = temp->next ;
                i++;
            }
            
        }
    }

    void deleteAtIndex(int index)
    {
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    MyLinkedList *obj = new MyLinkedList();
    obj->addAtHead(1);
    obj->addAtHead(2);
    obj->addAtHead(3);
    obj->addAtTail(4);
    obj->addAtTail(5);
    obj->addAtTail(7);
    // obj->display();
    obj->addAtIndex(5,6);
    // cout<<obj->size;
    return 0;
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */