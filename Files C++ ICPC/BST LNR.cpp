#include <iostream>
using namespace std;
typedef int Infotype;

struct NODE
{
    Infotype info;
    NODE* left;
    NODE* right;
};

class BinaryTree
{
    public:
        NODE* root;
    public:
        BinaryTree ()
        {
            root = NULL;
        }
        NODE* khoitaonode(Infotype info)
        {
            NODE* node = new NODE();
            node->info = info;
            node->left = NULL;
            node->right = NULL;

            return node;
        }
        NODE* ChennodevaoTree(Infotype info, NODE* root)
        {
            if (root == NULL)
            {
                return khoitaonode(info);
            }
            else if (info < root->info)
            {
                root->left = ChennodevaoTree(info, root->left);
            }
            else
            {
                root->right = ChennodevaoTree(info, root->right);
            }

            return root;
        }
        void TaoTree(int n)
        {
        	cout << "Nhap info node can them: " << endl;
            for (int i = 1; i <= n; i++)
            {
                Infotype x;
                cin >> x;
                root = ChennodevaoTree(x, root);
            }
        }
        void DuyetTreeLNR(NODE* root)
        {
            if (root != NULL)
            {
                DuyetTreeLNR(root->left);
                cout << root->info << " ";
                DuyetTreeLNR(root->right);
            }
        }
};

main()
{
    BinaryTree plist1;
    int n;
    cout << "Nhap so node co trong tree: "; cin >> n;
    cout << "---------------------Nhap----------------------" << endl;
    plist1.TaoTree(n);

    cout << "---------------------Duyet----------------------" << endl;
    plist1.DuyetTreeLNR(plist1.root);
}
