#include <iostream>
using namespace std;

void CutRod(int* p, int n) {
	int* r = new int[n + 1];
	int* s = new int[n + 1];
	r[0] = 0;
	for (int i = 1; i <= n; i++) {
		int q = -2147483647;
		for (int j = 0; j < i; j++) {
			if (q < p[j] + r[i - j - 1]) {
				q = p[j] + r[i - j - 1];
				s[i] = j + 1;
			}
		}
		r[i] = q;
	}
	cout << r[n] << "\n";
	for (; n > 0; n -= s[n])
		cout << s[n] << " ";
	cout << "-1\n";
	delete[] s;
	delete[] r;
}

int main(int argc, char **argv) {
	int arraySize;
	cin >> arraySize;
	int* Sequence = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
		cin >> Sequence[i];
	
	CutRod(Sequence, arraySize);

	delete[] Sequence;
	return 0;
}