#include<iostream>

using namespace std;

void BubbleSort(int* vec, int sizeVec) {


	for (int i = 0; i <= sizeVec; i++) {

		vec[i];

		if (vec[i] < vec[i + 1]) {

			for (int i = vec[0]; i <= vec[sizeVec]; i++) {
				vec[i] = vec[i + 1];
				vec[i + 1] = vec[i];
			}

		}
		else {
			for (int i = vec[0]; i <= sizeVec; i++) {
				vec[i] = vec[0];
			}
		}
	}

}

void printBubbleSort(int* vec, int sizeVec) {

	for (int i = vec[0]; i <= sizeVec; i++) {

		cout << vec[i] << endl;
	}


}




int main() {

	int vec[10] = { -1, 3, 99, 0, 55, 76, -101, 2, 21, 35 };
	BubbleSort(vec, 10);
	printBubbleSort(vec, 10);




	system("pause");
	return 0;
}