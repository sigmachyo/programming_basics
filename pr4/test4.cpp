#include <iostream>
using namespace std;
//7
/*int  find_most_frequent(int a, int b, int c, int d)
	{
		return (a + b + c + d);
	}
int main() {
	int a, b, c, d, sum;
	cin >> a >> b >> c >> d;
	sum =  find_most_frequent(a, b, c, d);
	if (sum < 2)
	{
		cout << 0;
	}
	else if (sum > 2) {
		cout << 1;

	}
	else {
		cout << " - 1";
	}
	return 0;

}//8
float dist(float x1, float x2, float y1, float y2) {
	return pow(pow(max(x2, x1) - min(x2, x1), 2) + pow(max(y2, y1) - min(y1, y2), 2), 0.5);
}
int main() {
	float x1, x2, y1, y2,ras;
	cin >> x1 >> x2 >> y1 >> y2;
	ras = dist(x1, x2, y1, y2);
	cout << ras;
	return 0;

	


}
//9 */
float min_or_max(float a, float b, float c) {
	if (a > 0.5) {
		return max(b, c);
	}
	else {
		return min(b, c);
	}
	
}

int main() {
	float a, b, c, d;
	cin >> a >> b >> c;
	d = min_or_max(a, b, c);
	cout << d;
}