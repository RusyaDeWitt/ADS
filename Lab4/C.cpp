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



    public:

        void insert(int x)
        {
            node * res = insert(root, x);
            if(root == NULL){
                root = res;
            }
        };


};

int main()
{
    bst *tree = new bst();

    int c = 1;
    int max = 0 , prevmax = 0;
    
    while(c != 0)
    {   
        cin>>c;
        if(c == 0) break;
        if(c > max)
        {
            prevmax = max;
            max = c;
        };

        if(prevmax < c && c < max) prevmax = c;

        tree->insert(c);
    }
    cout<<prevmax;
}