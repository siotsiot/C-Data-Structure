// 중위 순회
void inorder(TreeNode* root)
{
	if (root != NULL)
	{
		inorder(root->left);		 // 왼쪽 서브트리 순회
		printf("[%d] ", root->data); // 노드 방문
		inorder(root->left);		 // 오른쪽 서브트리 순회
	}
}
// 전위 순회
void preorder(TreeNode* root)
{
	if (root != NULL)
	{
		printf("[%d] ", root->data); // 노드 방문
		preorder(root->left);		 // 왼쪽 서브트리 순회
		preorder(root->left);		 // 오른쪽 서브트리 순회
	}
}
// 후위 순회
void postorder(TreeNode* root)
{
	if (root != NULL)
	{
		postorder(root->left);		 // 왼쪽 서브트리 순회
		postorder(root->left);		 // 오른쪽 서브트리 순회
		printf("[%d] ", root->data); // 노드 방문
	}
}
