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

        int max = 0;

        int height(node * current, int level)
        {   
            if(level > max)
            {
                max = level;
            }

            if(current != NULL)
            {
                height(current->left, level + 1);
                height(current->right, level + 1);
            }
         
            return max;
        }

    public:

        void insert(int x){
            node * res = insert(root, x);
            if(root == NULL){
                root = res;
            }
        };

        void height(){
            cout<<height(root, 0)<<endl;
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

    tree->height();

}