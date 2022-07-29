#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insert(node* &head,int val){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* newnode=new node(val);
    temp->next=newnode;
}
node* appendk(node* &head,int k){
    node* temp=head;
    node* start;
    int count=1;
    while(temp->next!=NULL){
        if(count==k)start=temp;
        temp=temp->next;
        count++;
    }
    node* newhead=start->next;
    start->next=NULL;
    temp->next=head;
    return newhead;
}
node* merge(node* &head1,node* &head2){
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;
    node* d;
    if(head1->data<head2->data){
        d=head1;
        d->next=merge(head1->next,head2);
    }
    else{
        d=head2;
        d->next=merge(head1,head2->next);
    }
    return d;

}
node* mergeptr(node* &head1,node* &head2){
    node* a=head1;
    node* b=head2;
    node* d=new node(1);
    node* start=d;
    while(a!=NULL && b!=NULL){
        if(a->data<b->data){
            d->next=a;
            a=a->next;
        }
        else{
            d->next=b;
            b=b->next;
        }
        d=d->next;
    }
    while(a!=NULL){
        d->next=a;
        a=a->next;
        d=d->next;
    }
    while(b!=NULL){
        d->next=b;
        b=b->next;
        d=d->next;
    }
    d->next=NULL;
    return start->next;
}
void evenAfterOdd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL && even->next !=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        if(odd->next!=NULL)
        even=even->next;
    }
    odd->next=evenstart;
    even->next=NULL;

}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* a=new node(1);
    node* b=new node(2);
    // for(int i=1;i<5;i++){
    //     insert(a,i+2);
    //     insert(b,i+3);
    // }
    // display(a);
    // display(b);
    // node* newnode=merge(a,b);
    // display(newnode);
    // node* newnode2=mergeptr(a,b);
    // display(newnode2);
    for(int i=2;i<6;i++){
        insert(a,i);
    }
    display(a);
    evenAfterOdd(a);
    display(a);
}