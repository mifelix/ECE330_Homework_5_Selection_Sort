// Fig. 8.13: fig08_13.cpp
// Selection sort with pass-by-reference. This program puts values into an 
// array, sorts them into ascending order and prints the resulting array.
#include <iostream> 
#include <iomanip>
using namespace std; //kept these the same as was in the example provided

template <class Sort> //this is the function template for selectionSort
void selectionSort(Sort yoda[], int baby) {
	int minimum;  //this is for the smallest number
	
	for (int mando = 0; mando < baby - 1; mando++) {   //this is a FOR loop for baby minus 1
		int minimum = mando;  //this is the first number of the remaining array
	
	for (int iroh = mando + 1; iroh < baby; iroh++) //this FOR loop is used to find the smallest number
			if (yoda[iroh] < yoda[minimum])
			minimum = iroh;
			swap(yoda[mando], yoda[minimum]); //this swaps :D
		
	}
}

int main() {
	float palpatine[100]; //I used the float so there is the capability for decimal numbers.
	int zuko[100];
	int mando;
	int vader;
	//Here, this prints some statements that Palpatine asks for to sort to execute the order >:D
	cout << "Emperor Palpatine Says For You To Enter The Order Number:\n";
	cin >> vader; //takes it in
	
	
	for(mando = 0; mando < vader; mando++) {
		cout << "\nEnter Another Please:";
		cin >> palpatine[mando]; //Takes it in
	}
	//used selectionSort
	selectionSort(palpatine,vader);
	cout << "\nAfter The First Order Has Sorted Through The Execution Of Order Numbers:\n";
	
	for(mando = 0; mando < vader; mando++) {
		cout << palpatine[mando] << "\t";  //this prints the results and also used \t for spacing it out
	}
	
	return 0;
	
}
