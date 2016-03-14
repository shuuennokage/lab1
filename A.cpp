#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Please input a number." << endl;
	cin >> num;
	if (num > 1){
		cout << num << " ";
		for (; num !=1;){
			if (num %2 == 1){
				num = (num*3)+1;
				cout << num << " ";
			}else{
				num /= 2;
				cout << num << " ";
			}
		}
	}else{
		cout << "Negative numbers are unavaliable.\n";
	}
	return 0;
}
