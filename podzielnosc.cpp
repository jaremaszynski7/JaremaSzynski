#include <iostream>

using namespace std;

int nwd(int n, int m){
	while(n!=m){
		if(n>m){
			n-=m;
		}else{
			m-=n;
		}
	}
	return n;
}

int main(){
	int n,m;
	cin >> n >> m;
	
	if(n <= 0 || m <= 0){
		cout << "Wczytane liczby musza byc dodatnie" << endl;
		return 0;
	}
	cout << n << " " << m << " NWD tych liczb to: " << nwd(n,m) <<  endl;
	return 0;
}
