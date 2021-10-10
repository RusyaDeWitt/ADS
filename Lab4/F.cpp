#include <bits/stdc++.h>

using namespace std;

#include <iostream>

using namespace std;

struct node
{
    int val;
    node * left;
    node * right;
    node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

struct bst 
{
    private:
        node * root;

        node * insert(node * current, int x)
        {
            if(current == NULL) return new node(x);

            if(current->val < x)
            {   
               current->right = insert(current->right, x);
            };

            if(current->val > x)
            {
               current->left = insert(current->left, x);
            };

            return current;
        };

        void forks(node * current)
        {
            if(current != NULL)
            {      
                    if(current->left != NULL && current->right != NULL)
                    {   
                            forks(current->left);
                            cout<<current->val<<endl;
                            forks(current->right);
                    } else {
                            forks(current->left);
                            forks(current->right);
                    }
            };
            return;
        }

    public:

        void insert(int x)
        {
            node * res = insert(root, x);
            if(root == NULL){
                root = res;
            }
        };

        void forks()
        {
            forks(root);
        }

};

int main()
{
    bst *tree = new bst();

    int c = 1;
    
    while(c != 0)
    {   
        cin>>c;
        if(c == 0) break;
        tree->insert(c);
    }

    tree->forks();

}