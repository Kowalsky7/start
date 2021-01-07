// применение арифмтических операций с присваиванием
#include<iostream>
using namespace std;
int main()
{
	int ans = 105;
	ans += 47; // то же самое, что и ans+47
	cout << ans << endl;
	ans -= 34; // то же самое, что и ans-34
	cout << ans << endl;
	ans *= 2; // то же самое, что и ans*2
	cout << ans << endl;
	ans /= 5; // то же самое, что и ans/5
	cout << ans << endl;
	ans %= 4; // то же самое, что и ans%4
	cout << ans << endl;
	return 0;
}