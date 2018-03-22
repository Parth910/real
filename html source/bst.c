#include <stdio.h>
#include <stdlib.h>
typedef struct bst
{    int data;
	struct bst* right;
	struct bst*  left;
}bst;
bst* creat(int no)
{
	bst* temp=(bst*)malloc(sizeof(bst));
	temp->right=temp->left=NULL;
	temp->data;
	return temp;
}
bst* insertno(int key,bst* root)
{      bst* ROOT=root;
       bst* p=NULL;
	   
	   
	   if (ROOT==NULL)
	   {
	   	 
	   	   return creat(key);
	   }
	   else
	   {   p=root;
	   	if (p->data>key)
	   	{
	   		p->left=insertno(p->left,key);
	   	}
	   	else
	   	{
	   		p->right=insertno(p->right,key);
	   	}
	   }

return p;

}
void inorder(bst* root)
{
	 if (root==NULL)
	 {
	 	return;
	 }
	 else
	 {	inorder(root->left);
	    printf("%d\n",root->data );
	    inorder(root->right);
	  }
}
void main()
{   int n,key;
	bst* root=NULL;
	do
   {printf("1.For creat root.\n2.For insert no.\n3.For Print no.\n4.For Exit");
    scanf("%d",&n);
    switch
    {	case 1: printf("Enter the no. which you want to insert.->");
	   			scanf("%d",&key);
	   			printf("\n");
	   			root=creat(int key);
    	case 2:printf("Enter the no. which you want to insert.->");
	   			scanf("%d",&key);
	   			printf("\n");
	   			root=insertno(key);
    	break;
    	case 3:inorder(root);
    	break;
    	case 4:
    	break;
    	}
    }while(n!=4);
}