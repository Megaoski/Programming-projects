#include<iostream> 
using namespace std;

void countUp(unsigned int val)
{
	for (int i = 0; i <= val; i++)
	{
		cout << i << endl;
	}

}

bool searchRec(int vec[], int sizeVec, int val)
{
	for (int i = vec[0]; i <= sizeVec; i++)
	{
		if (i == val)
		{
			cout << "The value it's inside the array" << endl;
			return 0;
		}
		else
		{
			cout << "The value it's not in the array" << endl;
			return 1;
		}
	}


}

int sumElemsRec(int vec[], int sizeVec)
{
	int result = 0;

	for (int i = vec[0]; i <= sizeVec; i++)
	{
		result += vec[i];
	}

	cout << result << endl;
	return 0;
}


int main()
{
	unsigned int example = 5;
	countUp(example);
	//--------------------------------------------------
	int vector[] = { 2, 2, 4, 4, 6, 6, 8, 8, 9, 9 };
	searchRec(vector, 10, 2);
	//-------------------------------------------------
	sumElemsRec(vector, 10);// no acaba de furular
	system("pause");
	return 0;
}