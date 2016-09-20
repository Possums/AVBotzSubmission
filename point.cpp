#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream myfile("output.txt");
	ifstream infile("test.txt");
	int x=0;
	int i = 0;
	int a, b, c;
	while (infile >> a >> b >> c)
	{
		// process 3d coordinate (a,b,c)
		x = pow(pow(a,2)+ pow(b,2) + pow(c,2), 1 / 2.);
		std::cout << x << endl;

		myfile << x << endl;

		if (x > 200) {
			i++;
		}
	}
	
	cout << i << endl;
	myfile << i;

}	
