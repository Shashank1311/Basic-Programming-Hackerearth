#include <iostream>
using namespace std;

int main()
{
	int T;
	int a, b;
	cin >> T;
	while(T--){
		cin >> a >> b;
		if(a > b)
			cout << (a/b) << endl;
		else
			cout << (b/a) << endl;
	}
}
