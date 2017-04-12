#include<iostream>
using namespace std;

class EvenNumber {
	
	int n;
	public:
		EvenNumber ();
	    EvenNumber(int);
	
		void setValue(int a){
			n += a;
			n *= 2;
		}
	
		int getValue(){
			return n;
		}		
	
		int getNext(){
			return n + 2;	
		}
		
		int getPrev(){
			return n - 2;	
		}
};

EvenNumber::EvenNumber(){
    n = 0;	
}

EvenNumber::EvenNumber (int a){
    n = a;	
	
}

int main(){
	
	int num;
	EvenNumber evens;
	
	cout << "Enter an integer: ";
	cin >> num;
	
	evens.setValue(num);
	
	cout << "The current even number is " << evens.getValue() << endl;
	cout << "The previous even number was " << evens.getPrev() << endl;
	cout << "The next even number will be " << evens.getNext() << endl;	
	
    return 0;	
}
