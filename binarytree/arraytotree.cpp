// github 용
#include <iostream>
#include <queue>
using namespace std;
 
class TreeNode {
public:    
    int val;
    TreeNode *left, *right;
    TreeNode(int x){
        val = x;
        left = right = nullptr;
    }
};
 
TreeNode* buildTree(int *nums, int size) { 
    if(size == 0) return nullptr;
 
    TreeNode* root = new TreeNode(nums[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (i < size) {
        TreeNode* curr = q.front();
        q.pop();
        if (i < size) {
            curr->left = new TreeNode(nums[i++]);
            q.push(curr->left);
        }
        if (i < size) {          
            curr->right = new TreeNode(nums[i++]);
            q.push(curr->right);
        }
    }
    return root;
}

// 중위 순회 (Left → Root → Right)
void printInOrderTree(TreeNode* root) {
    if (!root) return;
    printInOrderTree(root->left);
    cout << root->val << " ";
    printInOrderTree(root->right);
}
 
int main() {
    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(nums) / sizeof(int);

    // 배열을 완전 이진 트리로 변환
    TreeNode* root = buildTree(nums,size);
    printInOrderTree(root);
    return 0;
}
