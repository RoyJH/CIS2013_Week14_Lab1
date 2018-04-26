#include "todo.h"
using namespace std;

todo::todo(int len){
	length = len;
	list = new string[length];
}
todo::~todo(){
	delete [] list;
}
todo::todo(){
	todo(5);
}

	//Adds an item to list
void todo::add(string item){
	if(next < length){
	list[next] = item;
	next++;
		}
}	
	//Finish the last thing in list
void todo::done(){
	next--;
	list[next]="";
}
		
	//Print list
void todo::print(){
	for (int i=0;i<next;i++){
		cout << " * " << list[i] << endl;
		}
}