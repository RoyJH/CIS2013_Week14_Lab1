#include <iostream>
#include <cstring>
#include "todo.h"
using namespace std;


int main(){
	char next = 'y';
	int len = 0;
	
	cout<< "How long do you want your list:  ";
	cin>> len;
	
	ToDo list(len);
	
	while(next != 'x'){
		
		cout << "Add to list (a)" << endl;
		cout << "Done list item (d)" << endl;
		cout << "Print list (p)" << endl;
		cout << "Exit list app (x)" << endl;
		cout << "What do you want to do: ";
		cin >> next;
		
		switch(next){
			case 'a':
				break;
			case 'd':
				break;
			case 'p':
				break;
			case 'x':
				break;
			}
		}
}