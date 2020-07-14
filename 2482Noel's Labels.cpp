#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<string, string>mp,mp2;
	int n, m;
	string s1, s2,s3,s4;
	cin >> n;
	getline(cin, s1);
	while(n--)
	{
		getline(cin, s1);
		getline(cin, s2);
		mp.insert(make_pair(s1, s2));
	}

	cin >> m;
	getline(cin, s1);
	while (m--)
	{
		getline(cin, s1);
		getline(cin, s2);
		cout << s1 << endl;
		cout << mp[s2] << endl;
		cout << endl;
	}
	return 0;
}