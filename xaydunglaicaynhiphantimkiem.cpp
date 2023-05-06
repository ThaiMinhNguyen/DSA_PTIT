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

void insert(Node* &root, int k){
	if(root == NULL){
		root = new Node(k);
		return;
	}
	if(root->data>k) insert(root->left, k);
	if(root->data<k) insert(root->right, k);
}

void PrintPostOrder(Node* root){
	if(root == NULL){
		return;
	}
	if(root->left != NULL) PrintPostOrder(root->left);
	if(root->right != NULL) PrintPostOrder(root->right);
	cout << root->data << " ";
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
			insert(root, a[i]);
		}
//		cout << root->data << endl;
		PrintPostOrder(root);
		cout << endl;
	}
}
