//Tyler Wells
//CIS 1202
// 07/30/2023
//Exceptions

#include<iostream>

using namespace std;

//Template

template <typename T>

//Half Function

T half(T val) {

	T num;

	num = val / 2;

	if (*typeid(val).name() == 'i') {

		if (num * 2 != val) {

			num++;

		}

	}

	return num;

}


//Main function
int main() {

	int a = 7.0;

	float b = 5.0f;

	double c = 3;

	cout << "Half values of : \n";

	cout << "\t" << a << " : " << half(a) << "\n";

	cout << "\t" << b << " : " << half(b) << "\n";

	cout << "\t" << c << " : " << half(c) << "\n";

}