#include <iostream>

using namespace std;
class Node{
    public:

        int data;
        Node* next;
    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
    public:
        Node(int data1){
            data = data1;
            next = nullptr;
        }

};

int main()
{
    int arr[5] = {1,2,3,4,5};

    //coping elements to linked list
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<5;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    //traversing in a linked list
    /*Node* tempd = head;
    while(tempd){
        cout<<tempd->data<<" ";
        tempd = tempd->next;
    }*/
    //deleting head from a linked list
    /*Node* tempd = head;

    head = head->next;
    delete tempd;*/

    //deleting tail from linked list

    /*Node* tempd = head;
    while(tempd->next->next != nullptr){
        tempd = tempd->next;
    }
    delete tempd->next;
    tempd->next = nullptr;*/

    //deleting kth from the linked list
    /*int k = 3;
    int t = 1;
    Node* temp = head;
    while(t<k-1){
        temp = temp->next;
        t++;
    }
    cout<<temp->data;
    temp->next = temp->next->next;
    //delete temp;*/

    //deleting by value in  a linked list
    /*Node* temp = head;Node* prev = nullptr;
    while(true){
            if(temp->data == 3){
                prev->next = prev->next->next;
                break;
            }
            prev = temp;
        temp = temp->next;

    }*/

    //insertion at head
    /*Node* key = new Node(0);
    key->next = head;
    head = key;*/

    //insertion at tail
    /*Node* key = new Node(6);
    Node* temp=head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = key;*/



    return 0;
}
