#include<stdio.h>
#include<stdlib.h>

struct node
{
 struct node *lch,*rch;
 int key;
};

 
 
 struct node* insert(struct node *root,int key)
 {
  if(root==NULL)
   {struct node* nn;
   nn=(struct node*)malloc(sizeof(struct node));
   nn->key=key;
   nn->rch=0;
   nn->lch=0;
   return nn;
 }
  else if(key<root->key)
   root->lch=insert(root->lch,key);
  else if(key>root->key)
   root->rch=insert(root->rch,key);
  return root;   
 }
 
 void inorder(struct node *root)
 {
  if(root==NULL)
  return;
  inorder(root->lch);
  printf("%d \t",root->key);
  inorder(root->rch);
 }
 
void preorder(struct node  *root)
{
if(root==NULL)
{
return;
}

printf("%d\t",root->key);
preorder(root->lch);
preorder(root->rch);
}
 void postorder(struct node *root)
 {
 if(root==NULL)
 {
 return;
 }
 
 postorder(root->lch);
 postorder(root->rch);
 printf("%d\t",root->key);
 }
 int main()
 {
  struct node *root=NULL;
   int a[8]={34,23,24,5,25,12,67,8};
   for(int i=0;i<8;i++)
   root=insert(root,a[i]);
   inorder(root);
   printf("\n preorder\n");
   preorder(root);
    printf("\n postorder\n");
   postorder(root);
    }
 
 
