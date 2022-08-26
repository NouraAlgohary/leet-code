#include<iostream>
#include<string>
#include<stack>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	stack<string>order;
	set<string>st;
	string in;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> in;
		order.push(in);
	}
	while(true)
	{
		string out = order.top();
		if (st.count(out)==0)
		{
			cout << order.top() << endl;
			st.insert(out);
		}
		order.pop();
		//cout << "    " << order.top() << endl;
		if (order.empty()) return 0;
	}
	return 0;
}
