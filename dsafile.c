// program to delete element from an array
#include<stdio.h>
int main(){
   int arr[100] , pos , i , n;
   printf("enter the elements in the array");
   scanf("%d" ,&arr);
   printf("enter the element\n" , n);
   for(i=0 ; i<n ; i++)
   scanf("%d", &arr[i]);
   printf("enter location where element delete \n" );
   scanf("%d" , &pos);
   if(pos >= n+1)
   printf("deletion not possible");
   else{
       for(i=pos-1 ; i<n-1 ; i++)
       arr[i] = arr[i+1];
       printf("%d  \n" , arr[i]);
   }
   return 0;
}*/



//remove duplicates in an array
#include<stdio.h>
int main(){
    int arr[40] ,  n;
    printf("the no of elements in an array");
    scanf("%d" , &n); 
    printf("enter the elements in an array \n" , n);

    for(int i=0 ; i<n ; i++){
        scanf("%d" ,  &arr[i]);
    }

    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
        if(arr[i] == arr[j]){
          for(int k=j ; k<n-1 ; k++){
            arr[k] = arr[k+1];
          }
          n--;
          j--;
        }
        }
    }

    printf("elements after deletion is \n");
    for(int i=0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }
}




//count no of nodes in linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* head;

void insert(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->next = head;
    head = temp;
}

void print(){
    struct node* temp = head;
    int count = 0;

    while(temp!= NULL){
        temp = temp->next;
        count++;
    }

    printf("\nno of nodes is %d", count);
}

int main(){
    head  = NULL;
    insert(2);
    insert(4);
    print();
    return 0;
}*/





   

//finding minimum and maximum element in linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;

void insert(int data){
     struct node* temp = (struct node*)malloc(sizeof(struct node));
     temp->data = data;
     temp->next = head;
     head = temp;
}

void maximum(){
    struct node*temp = head;
    int max = temp->data;
    while(temp!=NULL){
        if(max < temp->data){
            max = temp->data;
        }
       temp = temp->next;
    }
    printf(" maximum element is: %d \n", max);
} 

void minimum(){
    struct node* temp = head;
    int min = temp->data;
    while(temp!=NULL){
        if(min > temp->data){
            min = temp->data;
        }
        temp = temp->next;
    }
    printf(" minimum element is: %d \n", min);
}

int main(){
    insert(56);
    insert(67);
    maximum();
    minimum();
}*/





   
   
// perform operations on linkedlist
#include<stdio.h>
struct node{
      int data;
      struct node* next;
};
struct node* head;

void insert(int data){
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    temp = temp->data;
    temp->next = head;
    head = temp;
}

void insertatbeginning(int data){
    struct node*temp1 = (struct node*)malloc(sizeof(struct node));
    temp1 = temp1->data;
    temp1->next = NULL;

    struct node*temp2  = head;
    while(temp2 -> next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

void insertpostition(int data , int position){
    struct node*temp1 = (struct node*)malloc(sizeof(struct node));
    temp1 = temp1->data;

    struct node*temp2 = head;
    for(int i=2 ; i<position-1 ; i++){
        if(temp2->next != NULL){
            temp2 = temp2->next;
        }
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    
}
