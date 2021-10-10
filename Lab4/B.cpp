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
        int sum = 0;

        node * insert(node * current, int x)
        {
            if(current == NULL)
            {
                sum++; 
                return new node(x);
            }
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

        void insert(int x){
            node * res = insert(root, x);
            if(root == NULL){
                root = res;
            }
        };

        void elementsNum()
        {
            cout<<sum<<endl;
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

    tree->elementsNum();

}