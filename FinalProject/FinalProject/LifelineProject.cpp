#include <iostream>
#include <string>

using namespace std;

void bars();
void stepsWithDots();
void longest();
void stepsWithBars();
void bars();
void rectangle();

const int SIZE = 4;

int main() {
	bars();
	stepsWithDots();
	longest();
	stepsWithBars();
	bars();
	rectangle();
	stepsWithDots();
	longest();
}

void bars() {
	int space = 6 * SIZE + 1;
	for (int j = 0; j < SIZE; j++) {
		for (int i = 0; i < space; i++) {
			cout << " ";
		}
		cout << "||";
		cout << "\n";
	}	

}

void stepsWithDots() {
	int dots = 0;
	int space = 6 * SIZE + 1 - 3;
	for (int j = 0; j < SIZE; j++) {
		if (j != 0) {
			space -= 3;
		}
		for (int i = 0; i < space; i++) {
			cout << " ";
		}
		cout << "__" << "/";
		for (int i = 0; i < dots / (SIZE - 1); i++) {
			cout << ":::";
		}
		cout << "||";
		for (int i = 0; i < dots / (SIZE - 1); i++) {
			cout << ":::";
		}
		cout << "\\" << "__";
		dots += (SIZE - 1);
		cout << "\n";
	}
}

void longest() {
	int space = 6 * SIZE + 1 -3* SIZE;
	for (int i = 0; i < space; i++) {
		cout << " ";
	}
	cout << "|";
	for (int i = 0; i < 6 * SIZE; i++) {
		cout << "\"";
	}
	cout << "|";
	cout << "\n";
}

void stepsWithBars() {
	int space = 6 * SIZE + 1 - 3 * SIZE;
	int num = SIZE * 3 - 2;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		cout << "\\_";
		for (int j = num; j >= 0; j--) {
			cout << "/\\";
		}
		cout << "_/";
		cout << "\n";
		num -= 2;
		space += 2;
	}
}

void rectangle() {
	int percentages = SIZE - 2;
	int space = 6 * SIZE + 1 - (SIZE -2)-1;
	for (int i = 0; i < SIZE * SIZE; i++) {
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		cout << "|";
		for (int j = 0; j < percentages; j++) {
			cout << "%";
		}
		cout << "||";
		for (int j = 0; j < percentages; j++) {
			cout << "%";
		}
		cout << "|";
		cout << "\n";
	}
}
