#include<bits/stdc++.h>
using namespace std;
class tree
{
    int info;
    tree* left;
    tree* right;
public:

    tree(int data=0)
    {
        info=data;
        left=NULL;
        right=NULL;
    }
    tree* inse_rt(tree* root)
    {
        int data;
        cout<<"enter value\n";
        cin>>data;
        tree *temp=new tree(data);
        if(root==NULL)
        {
            root=temp;
            root->info=data;
            return(root);
        }
        else
        {
            char dir[20];
            cout<<"enter direction\n";
            cin>>dir;
            cout<<strlen(dir)<<endl;
            int i=0;
            tree *cur=root;
            while((i<(strlen(dir)-1))&&(cur!=NULL))
                  {
                      if(dir[i]=='L')
                       cur=cur->left;
                      else if(dir[i]=='R')
                       cur=cur->right;
                      i++;
                  }
            if(dir[i]=='L')
                cur->left=temp;
            else if(dir[i]=='R')
                cur->right=temp;
            return(root);
        }
    }
    void inorder(tree* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        cout<<root->info<<endl;
        inorder(root->right);
    }

};
int main()
{
    tree x;
    tree* root=NULL;
    for(int i=1;i<=5;i++)
    {
        root=x.inse_rt(root);
    }
    x.inorder(root);
    return(0);
}
