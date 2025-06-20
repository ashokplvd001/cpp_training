#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if (A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if (B == 0) throw 0;
		real = (A / B) * real;
		int ans = v.at(B);
		return real + A - B * ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while (T--) {
		long long A, B;
		cin >> A >> B;
		long long res = 0;
		try {
			res = Server::compute(A, B);
			cout << res << endl;
		}

		catch (invalid_argument e)
		{
			cout << "Exception: " << e.what() << endl;
		}


		catch (std::bad_alloc e)
		{
			cout << "Not enough memory" << endl;
		}
		catch (exception& e)
		{
			cout << "Exception: " << e.what() << endl;
		}
		catch (...)
		{
			cout << "Other Exception" << endl;
		}
		/* Enter your code here. */

	}
	cout << Server::getLoad() << endl;
	return 0;
}



/*
Input :
2
-8 5
1435434255433 5



*/