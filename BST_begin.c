//different traversal for Binary trees
#include<stdio.h>
#include<stdlib.h>

struct BT_node
{
		int info;
		struct BT_node *left_child;
		struct BT_node *right_child;
};



//Pre-Order Traversal 
void pre_order(struct BT_node *root)
{
if(root == NULL)
return;
else
printf("%d ",root->info);
pre_order(root->left_child);
pre_order(root->right_child);
}

//Post-Order Traversal 
void post_order(struct BT_node *root)
{
if(root == NULL)
return;
else
printf("%d ",root->info);
post_order(root->left_child);
post_order(root->right_child);
}


//int main()
//{
//struct BT_node* root = (struct BT_node *) malloc(sizeof(struct BT_node));
//pre_order(root);
//post_order(root);
//	return 0;
//}