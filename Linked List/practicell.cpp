// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// void insertAtTail(node* &head, int val ){
//     node* n=new node(val);

//     if(head==NULL){
//         head=n;
//         return;
//     }

//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }

// node* reverse(node* &head){
//     if(head==NULL || head->next==NULL)
//      return head;

//     node* newhead=reverse(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;

// }

// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     node* head=NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);
//     display(head);
//     node* reversed=reverse(head);

//     display(reversed);
//     return 0;
// }

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}

// node * removeDuplicates( node *head){
//     node *temp=head;
//     while(temp->next!=NULL){
//         if(temp->data==temp->next->data){
//             node* todel=temp->next;
//             temp->next=temp->next->next;
//             delete todel;
//         }
//         else temp=temp->next;
//     }
//     return head;
// }


node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    return prev;
}

node* add(node* head){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==9){
            temp->data=0;
            temp=temp->next;
        }
        else{
            temp->data=temp->data+1;
            break;
        }
    }
    node* nn=head;
    while(nn->next!=NULL){ nn=nn->next;}
    if(nn->data==10){
        
    node* new_node = new node(1); 
    nn->next->next = new_node; 
    new_node->data = 1;
    new_node->next = NULL;
    return head;
    }
    return head;
}

node* addOne(node *head) {
    node* rev1=reverse(head);
    add(rev1);
    node* newhead=reverse(rev1);
    return newhead;
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
    node* head=NULL;
    int arr1[]={9,9,9,9};
    for(int i=0;i<4;i++) insert(head,arr1[i]);
    addOne(head);
    display(head);
    return 0;
}
