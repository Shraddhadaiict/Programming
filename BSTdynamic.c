#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
	struct node* parent;
};
struct node* newNode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	node->parent=NULL;
	return node;
}
struct node* insert(struct node* node,int data){
	if(node==NULL)
		return newNode(data);
	else
	{
		struct node *temp;
		if(data<=node->data)
		{
			temp=insert(node->left,data);
			node->left=temp;
			temp->parent=node;
		}
		else{
			temp=insert(node->right,data);
			node->right=temp;
			temp->parent=node;		
		}	
	}		
	return node;

}
void inOrder(struct node* node){
	if(node==NULL)
		return;
	inOrder(node->left);
	printf("%d",node->data);
	inOrder(node->right);
}
struct node* search(struct node* node,int data)
{
	if(node->data==data)
		return node;
	else{
		if(data<=node->data)
		{
			node=search(node->left,data);
		}
		else{
			node=search(node->right,data);		
		}
	}
}
void printNode(struct node* node){
	if(node->left!=NULL)
		printf("%d ",node->left->data);
	else if(node->right!=NULL)
		printf("%d ",node->right->data);
	else
		printf("NULL");
}
int main()
{	
	struct node* root=NULL,*temp;
 	int n;
	int z,i;
	printf("Enter the number of element you want to insert");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int x;
		printf("Enter element:");
		scanf("%d",&x);
		root = insert(root, x);
	}
	
 	printf("Enter the element you want to find next:");
	scanf("%d",&z);
	temp=search(root,z); 
	printNode(temp);
	return 0;
}
