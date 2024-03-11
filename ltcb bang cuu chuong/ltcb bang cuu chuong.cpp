#include <iostream>
using namespace std;
int main(){
	int i = 1, n, so=0;
	cout << "Nhap so nguyen to: ";
	cin >> n;
	do {
		if (n % i == 0) so++; i++;
	} while (i <= n);
	if (so == 2)cout << "La so nguyen to ";
	else cout << "Khong la so nguyen to ";
	return 0;
}
