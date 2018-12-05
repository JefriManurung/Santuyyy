#include <iostream>
using namespace std;

int main() {
	int n, f, size_of_farmyard, number_of_animals, farmers_environment_friendliness;

	cin >> n;

	for(int i = 0; i < n; i++){
		int sum = 0;
		cin >> f;
		for (int i = 0; i < f; i++) {
			cin >> size_of_farmyard;
			cin >> number_of_animals;
			cin >> farmers_environment_friendliness;
			sum += size_of_farmyard * farmers_environment_friendliness;
		}
		cout << sum << endl;
	}

	return 0;
}
