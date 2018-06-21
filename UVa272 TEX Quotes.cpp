#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>

using namespace std;

#define PI			3.14159265
#define OO			1e9
#define SS       	second
#define FF       	first  
#define Trace(n)  	cout<< #n <<" = "<< n << endl; 
#define ll			long long
#define endl		"\n"

int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[] = { -1, 1, 0, 0, 1, -1, 1, -1 };

void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}


int main()
{
	fast();
	bool stat = false;
	char c;
	while (cin.get(c))
	{
		if (c == '"')
		{
			stat ? (cout << "''") : (cout << "``");
			stat = !stat;
		}
		else
			cout << c;
	}
}