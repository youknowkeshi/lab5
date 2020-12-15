#include<iostream>
using namespace std;

int main(){
    int x,e=0,o=0;
    cout << "Enter an integer: ";
    cin >> x ;
    if(x!=0){
    	while(x!=0){
    		if(x%2==0){
			e++;
		}
		else{
			o++;
		}
	cout << "Enter an integer: ";
	cin >> x;
		}
	cout << "#Even numbers = "<<e<<"\n";
	cout << "#Odd numbers = "<<o;

    	return 0;
}
}
