#include<iostream>
using namespace std;

void printO(int x, int y){
if(x > 0 and y > 0){
for (int i = 1; i <= x ; i++){
for (int j = 1; j <= y ; j++){
cout << "O";
}
cout << endl;
}
}
else {
cout << "Invalid input";
}
}


int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
