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

int isIdentical(Node* n1, Node* n2){
	if(n1 == NULL && n2 == NULL){
		return 1;
	}
	if(n1 != NULL && n2 != NULL){
		if(n1->data == n2->data){
			return (isIdentical(n1->left, n2->left) && isIdentical(n1->right, n2->right));
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<Node*> v;
		int k = 2;
		while(k--){
			int n;
			cin >> n;
			int n1, n2;
			char c;
			Node *root = NULL;
			while(n--){
				cin >> n1 >> n2 >> c;
				if(root == NULL){
					root = new Node(n1);
				}
				insert(root, n1, n2, c);
			}
			v.push_back(root);
		}
		cout << isIdentical(v[0], v[1]) << endl;
	}
}
