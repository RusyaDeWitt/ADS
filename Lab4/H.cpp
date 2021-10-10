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


        bool balance(node * current, int *height)
        {   

            int leftHeight = 0, rightHeight = 0;
            int l = 0, r = 0;

            if (root == NULL) 
            {
                *height = 0;
                return 1;
            }   


            l = balance(current->left, &leftHeight);
            r = balance(current->right, &rightHeight);

            *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

            if (abs(leftHeight - rightHeight >= 2))
                return 0;

            else
                return l && r;            
        }

    public:

        


        void insert(int x){
            node * res = insert(root, x);
            if(root == NULL){
                root = res;
            }
        };

        void balance(){
            int height = 0;
            if(balance(root,&height))
                cout<<"YES";
            else
                cout<<"NO";
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

    tree->balance();

}