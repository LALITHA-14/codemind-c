#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
    struct node* next;
};

struct node* head;

struct node* node_new(int val){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->value = val;
    newnode->next = NULL;
    return newnode;
}

void insertAtEnd(int val){

    struct node* newnode = node_new(val);

    if(head==NULL){
        // The list is empty, thus we just need to assign head to the only element
        head = newnode;
    }
    else{
        // Iterating towards the end of the list
        struct node* current = head;
        while(current->next!=NULL){
            current = current->next;
        }
        
        // Updating the next pointer of the this element
        current->next = newnode;
    }
}

void print(){
    struct node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp=temp->next;
    }
    printf("\n");
}

int main() {
    head=NULL;
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int value;
        scanf("%d",&value);
        insertAtEnd(value);
    }
    print();
}
