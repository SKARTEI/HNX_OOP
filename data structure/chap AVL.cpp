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

treeNode* LLrotate(treeNode* parent)
{
    treeNode* child = parent->left;
    parent->left = child->right;
    child->right = parent;
    return child;
}

treeNode* RRrotate(treeNode* parent)
{
    treeNode* child = parent->right;
    parent->right = child->left;
    child->left = parent;
    return child;
}

treeNode* LRrotate(treeNode* parent)
{
    parent->left = RRrotate(parent->left);
    return LLrotate(parent);
}

treeNode* RLrotate(treeNode* parent)
{
    parent->right = LLrotate(parent->right);
    return RRrotate(parent);
}

void printTree(treeNode* root, int space = 0, int indent = 4)
{
    if (root == nullptr)
        return;

    space += indent;
    printTree(root->right, space);

    cout << endl;
    for (int i = indent; i < space; i++)
        cout << ' ';
    cout << root->data << "\n";

    printTree(root->left, space);
}

void deleteTree(treeNode* root) {
    if (root == nullptr) 
        return;

    deleteTree(root->left);
    deleteTree(root->right);

    delete root;
}

int main() {
    // 1. LL
    treeNode* n1 = new treeNode('C');
    treeNode* n2 = new treeNode('B', n1, nullptr);
    treeNode* root1 = new treeNode('A', n2, nullptr);

    cout << "LL 회전 전 트리:\n";
    printTree(root1);
    root1 = LLrotate(root1);
    cout << "\nLL 회전 후 트리:\n";
    printTree(root1);
    getchar(); // 잠깐 쉬었다 가자

    // 2. RR
    treeNode* n3 = new treeNode('C');
    treeNode* n4 = new treeNode('B', nullptr, n3);
    treeNode* root2 = new treeNode('A', nullptr, n4);

    cout << "\n\nRR 회전 전 트리:\n";
    printTree(root2);
    root2 = RRrotate(root2);
    cout << "\nRR 회전 후 트리:\n";
    printTree(root2);
    getchar(); // 잠깐 쉬었다 가자

    // 3. LR 
    treeNode* n5 = new treeNode('C');
    treeNode* n6 = new treeNode('A');
    treeNode* n7 = new treeNode('B', n6, n5);
    treeNode* root3 = new treeNode('D', n7, nullptr);

    cout << "\n\nLR 회전 전 트리:\n";
    printTree(root3);
    root3 = LRrotate(root3);
    cout << "\nLR 회전 후 트리:\n";
    printTree(root3);
    getchar(); // 잠깐 쉬었다 가자

    // 4. RL
    treeNode* n8 = new treeNode('D');
    treeNode* n9 = new treeNode('F');
    treeNode* n10 = new treeNode('E', n8, n9);
    treeNode* root4 = new treeNode('C', nullptr, n10);

    cout << "\n\nRL 회전 전 트리:\n";
    printTree(root4);
    root4 = RLrotate(root4);
    cout << "\nRL 회전 후 트리:\n";
    printTree(root4);
    getchar(); // 잠깐 쉬었다 가자

    // 메모리 해제
    deleteTree(root1);
    deleteTree(root2);
    deleteTree(root3);
    deleteTree(root4);

    return 0;
}
