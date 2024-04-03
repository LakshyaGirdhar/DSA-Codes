#include <bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    struct node* next = NULL;
}node ;
node * head =NULL, *temp = NULL;

void Insertnode(int c){
    node * ptr= (struct node *)malloc(sizeof(struct node));
    if(head == nullptr){
        ptr -> data=c;
        ptr-> next =NULL;
        temp=head=ptr;
    }
    else if(temp -> next ==NULL){
        ptr->data=c;
        ptr->next=NULL;
        temp->next=ptr;
        temp=ptr;
    }
    else{
    ptr->data=c;
    ptr->next=NULL;
    temp->next=ptr;
    temp=ptr;
        
    }
    
}
void display(node* ptr){
    
    while(ptr->next!=NULL && ptr!=NULL){
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<ptr->data;
    
}
int main(){
    node*  p1;
    Insertnode(2);
    Insertnode(3);
    Insertnode(223);
    Insertnode(5);
    display(head);


return 0;
}