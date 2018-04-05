#include <iostream>
#include <cstring>



//THIS code breaks the computer




using namespace std;

int main() {
	char stay;
	int rows, grade;
	int comps=0;
	int whichRow, whichComp;
	int *b;
	int **a;
	
	cout << "How many rows are there? ";
	cin >> rows;
	
	a = new int *[rows];
	for (int x = 0; x < rows; x++) {
		a[x] = new int[comps];
	}

	

	b = new int[comps];
	for (int x = 0; x < rows; x++) {
		cout << "How many computers are on row " << x + 1 << "? ";
		cin >> b[x];		
	}

	for (int x = 0; x < rows; x++) {
		for (int y = 0; y <comps; y++) {
			a[x][y] = 0;
		}
	}

	for (int x = 0; x < rows; x++) {
		cout << "Row " << x + 1 << ": ";
		for (int y = 0; y < b[x]; y++) {
			cout << a[x][y];
		}
		cout << endl;
	}


	cout << "Which row and computer will you grade on? ";
	cin >> whichRow >> whichComp;

	cout << "What is the grade for row " << whichRow << " computer " << whichComp << "? ";
	cin >> grade;

	for (int x = 0; x < rows; x++) {
		cout << "Row " << x + 1 << ": ";
		for (int y = 0; y < b[x]; y++) {
			cout << " empty ";
		}
		cout << endl;
	}

	
	delete[] a;
	delete[] b;
	cin >> stay;
	return 0;
}
