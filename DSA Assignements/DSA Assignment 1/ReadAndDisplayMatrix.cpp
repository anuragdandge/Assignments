#include<iostream>
using namespace std;
int main(){
    int size = 3;
	int arr1[size][size];

	cout << " Enter Element for Matrix 1 \n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> arr1[i][j];
		}
	}
	cout << " Matrix 1 \n ";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr1[i][j] << " \t ";
		}
		cout << "\n";
	}

}