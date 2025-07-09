#include <iostream>
using namespace std;

class treeNode
{
public:
    char data;
    treeNode* left;
    treeNode* right;
    treeNode(char value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
    treeNode(char value, treeNode* l, treeNode* r)
    {
        data = value;
        left = l;
        right = r;
    }
};

void preorder(treeNode* root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(treeNode* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(treeNode* root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Ž�� �Լ�
treeNode* search(treeNode* root, char key) 
{
    if (root == NULL) 
        return NULL;
    if (root->data == key) 
        return root;
    treeNode* found = search(root->left, key);
    
    if (found) 
        return found;
    
    return search(root->right, key);
}

// Ʈ�� ��ü ���� �Լ�
void deleteTree(treeNode* root) 
{
    if (root == NULL) 
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    
    delete root;
}

int main()
{
    // Ʈ�� ����: A*B - C/D
    treeNode* n1 = new treeNode('A');
    treeNode* n2 = new treeNode('B');
    treeNode* n3 = new treeNode('*', n1, n2);

    treeNode* n4 = new treeNode('C');
    treeNode* n5 = new treeNode('D');
    treeNode* n6 = new treeNode('/', n4, n5);

    treeNode* root = new treeNode('-', n3, n6);

    cout << "���� ��ȸ: ";
    preorder(root);
    cout << endl;

    cout << "���� ��ȸ: ";
    inorder(root);
    cout << endl;

    cout << "���� ��ȸ: ";
    postorder(root);
    cout << endl;

    char target = 'C';
    treeNode* found = search(root, target);
    if (found) cout << target << " ��尡 Ʈ���� �ֽ��ϴ�." << endl;
    else cout << target << " ��尡 Ʈ���� �����ϴ�." << endl;

    // Ʈ�� ��ü ����
    deleteTree(root);

    return 0;
}
