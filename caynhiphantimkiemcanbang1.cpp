#include<bits/stdc++.h>
using namespace std;

int a[10005];

struct Node{
	int data;
	Node *left, *right;
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

Node* createBST(int a[], int left, int right){
	if(left > right) return NULL;
	int mid = (left+right) / 2;
	Node *root = new Node(a[mid]);
	root->left = createBST(a, left, mid-1);
	root->right = createBST(a, mid+1, right);
	return root;
}

void PrintPreOrder(Node* root){
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	if(root->left != NULL) PrintPreOrder(root->left);
	if(root->right != NULL) PrintPreOrder(root->right);
	
}

int main(){
	int t;
	cin >> t;	
	while(t--){
		int n;
		cin >> n;
		Node* root = NULL;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
//		root = createBST(a, 0, n-1);
//		PrintPreOrder(root);
		cout << a[(n-1)/2] << endl;
	}
}
