#include <iostream>

using namespace std;

class base {
private:
	int _i;
	int _j;
public:
	base() { _i = _j = 0; cout << "base()\n"; }
	base(int i, int j) {
		_i = i;
		_j = j;
		cout << "base(int, int)\n";
	}
	~base() { cout << "~base()\n"; }
	void set(int i, int j) { _i = i; _j = j; }
	int getI() { return _i; }
	int getJ() { return _j; }
	void show() { cout << "i=" << _i << "; j=" << _j << endl; }
};
class derived : public base {
private:
	int _k;
public:
	derived() { cout << "derived()\n"; _k = 0; }
	derived(int k) { cout << "derived(int)\n"; _k = k; }
	~derived() { cout << "~derived()\n"; }
	void setK(int k) { _k = k; }
	int getK() { return _k; }
	void showK() { cout << "k=" << _k << endl; }
};

int main() {
	derived ob(3);
	ob.show();
	ob.showK();
}