#include<stdio.h>
#include<stdlib.h>

struct node
{
  int key;
 struct node *lch;
 struct node *rch;
};

struct node *root=NULL;

struct node* cn(int val)
{
   struct node *nn;
   nn=(struct node*)malloc(sizeof(struct node));
   nn->key=val;
   nn->lch=NULL;
   nn->rch=NULL;
   return nn;
   }
   
  struct node *insert(struct node *root,int key)
{
  if(root==NULL)
  root=cn(key);
  else if(key<root->key)
  root->lch=insert(root->lch,key);
  else
  root->rch=insert(root->rch,key);
  return root;

}
void inorder(struct node *root)
{
  if(root==NULL)
   return;
  inorder(root->lch);
  printf("%d ",root->key);
  inorder(root->rch);
}


int main()
{
printf("hh");
                      root=  insert(root,8);
      root=  insert(root,3);
 root= insert(root,1);
        root=   insert(root,6);
     root= insert(root,4);
             root=  insert(root,7);
                            root=   insert(root,10);
                                   root=   insert(root,14);
                                       root=   insert(root,13);
                                       printf("yyy");
   inorder(root)  ;
   return 0;
}





