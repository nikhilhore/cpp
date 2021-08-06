#include <iostream>
#include <vector>
using namespace std;

void powerSet(vector<int> input, vector<int> output, int index){
	if (index==input.size()){
		for (auto i: output){
			cout << i << " ";
		}
		cout << endl;
		return;
	}
	powerSet(input, output, index+1);
	output.push_back(input[index]);
	powerSet(input, output, index+1);
}

int main(){
	vector <int> input= {1,2,3,4,5};
	vector <int> output;
	powerSet(input, output, 0);
	return 0;
}