#include<iostream>
#include<algorithm>
using namespace std;

struct node {
	int data;
	node* pLeft;
	node* pRight;
	node(int x) {
		this->data = x;
		pLeft = pRight = NULL;
	}
};
typedef node* tree;
int find(int* M, int n,int k) {
	for (int i = 0; i < n; i++)if (M[i] == k)return i;
	return -1;
}
void add_Node(tree& T, int* M, int* N,int n) {
	T = new node(N[0]);
	int k = find(M, n, N[0]);
	int L[10001], R[10001], l = 0, r = 0;
	for (int i = 1; i < n; i++)
		if (find(M, n, N[i]) < k)L[l++] = N[i];
		else R[r++] = N[i];
	if (k > 0)add_Node(T->pLeft, M, L, k);
	if (n - k - 1 > 0)add_Node(T->pRight, M + k + 1, R, n - k - 1);
}
void Load(tree T) {
	if (T->pLeft != NULL)Load(T->pLeft);
	if (T->pRight != NULL)Load(T->pRight);
	cout << T->data << " ";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[10001], N[10001];
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int i = 0; i < n; i++)cin >> N[i];
		tree T = NULL;
		add_Node(T, M, N, n);
		Load(T);
		cout << endl;
	}
}
