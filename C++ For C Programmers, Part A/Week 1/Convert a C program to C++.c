#include <iostream>
#include <vector>

using namespace std;

// Constant definition for the number of elements
const int N = 40;

template <typename T>
int sum(T val)
{
	int s = 0; // Variable to store the sum
	
	// Loop through the container and accumulate the sum
	for(int i = 0; i < val.size(); ++i)
		s += val[i];
	
	return s; // Return the computed sum
}

int main()
{
	vector<int> vec; // Declare a vector of integers
	
	// Populate the vector with values from 0 to N-1
	for(int i = 0; i < N; ++i)
		vec.push_back(i);
		
	// Compute and print the sum of vector elements
	cout << "Sum is " << sum(vec) << '\n';
	
	return 0;
}
