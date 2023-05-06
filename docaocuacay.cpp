#include<bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	Node *left, *right;
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};


void insert(Node *root, int n1, int n2, char c){
	if(root == NULL){
		return;
	}
	if(root->data == n1){
		if(c == 'L'){
			root->left = new Node(n2);
		} else {
			root->right = new Node(n2);	
		}	
	} else {
		insert(root->left, n1, n2, c);
		insert(root->right, n1, n2, c);
	}
}


void insert_1(Node *root, int n1, int n2){
	if(root == NULL){
		return;
	}
	if(root->data == n1){
		if(root->left == NULL){
			root->left = new Node(n2);
		} else {
			root->right = new Node(n2);
		}
	} else {
		insert_1(root->left, n1, n2);
		insert_1(root->right, n1, n2);
	}
}

int countHeight(Node *root){
	if(root == NULL){
		return 0;
	} else {
		int lh = countHeight(root->left);
		int rh = countHeight(root->right);
		return max(lh, rh) + 1;
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		n--;
		int n1, n2;
		Node *root = NULL;
		while(n--){
			cin >> n1 >> n2;
			if(root == NULL){
				root = new Node(n1);
			}
			insert_1(root, n1, n2);
		}
		cout << max(countHeight(root) - 1, 0) << endl;
	}
}
