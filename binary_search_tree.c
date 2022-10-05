#include<stdio.h>
struct node
{
    char data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, char data)
{
    if(root==NULL)
        {
            root=(struct node *)(malloc(sizeof(struct node)));
            root->left= root->right = NULL;
            root->data=data;
            return root;
        }
        else if( data < root->data )
            root->left=insert(root->left,data);
        else if( data > root->data )
            root->right=insert(root->right,data);
        return(root);
}

  void search(struct node *root,char key)
{
    struct node *temp = (struct node*)(malloc(sizeof(struct node*)));
    temp= root;
    while (temp!=NULL)
        {
            if (temp->data==key)
            {
                printf("\nfound");
                return;
            }
            if (key < temp->data)
                temp=temp->left;
            else
                temp= temp->right;
        }
        printf("\nnot found");
}

void main()
{
    struct node *root=NULL;
    int n,i;
    char key , a[10];
    root=NULL;
    printf("\nEnter character to be searched:");
    scanf("%c", &key);
    printf("\nEnter the string:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
        root=insert(root,a[i]);
    search(root,key);
}
