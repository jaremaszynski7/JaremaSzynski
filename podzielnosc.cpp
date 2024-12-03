#include <iostream>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	if(n <= 0 || m <= 0){
		cout << "Wczytane liczby musza byc dodatnie" << endl;
		return 0;
	}
	cout << n << " " << m << endl;
	return 0;
}
