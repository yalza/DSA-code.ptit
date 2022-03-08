#include<iostream>
#include<stack>
#include<string>
using namespace std;
int xuly(int i, string* s)
{
	if (s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/")
	{
		if (s[i] == "+") return xuly(i * 2 + 1, s) + xuly(i * 2 + 2, s);
		if (s[i] == "-") return xuly(i * 2 + 1, s) - xuly(i * 2 + 2, s);
		if (s[i] == "*") return xuly(i * 2 + 1, s) * xuly(i * 2 + 2, s);
		if (s[i] == "/") return xuly(i * 2 + 1, s) / xuly(i * 2 + 2, s);
	}
	else return stoi(s[i]);
}
int main(){
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s[1000];
		for (int i = 0; i < n; i++) cin >> s[i];
		cout << xuly(0, s) << endl;

	}
}
