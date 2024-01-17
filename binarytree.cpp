#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
    this-> data = d;
    this-> left = NULL;
    this-> right = NULL;
    }
};

node* buildtree(node* root){
     cout<< "enter the data:"<<endl;
     int data;
     cin>>data;
     root = new node(data);

     if(data == -1){
        return NULL;
     }
     

     cout<<"Enter data for inserting in left"<<endl;
      
     root->left = buildtree(root->left);
     cout<<"enter data for inserting in right";
     root->right = buildtree(root->right);
     return root;
   
}

void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    
    while(!q.empty()){
        node*temp = q.front();
        cout<<temp -> data << " ";
        q.pop();
        if(temp-> left){
            q.push(temp-> left);
        }
        if(temp-> right){
            q.push(temp-> right);
        }
    }
}

int main(){
    node* root = NULL;

    root = buildtree(root);
    //1 2 7 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout<< "level order"<<endl;
    levelordertraversal(root);
    return 0;
}
