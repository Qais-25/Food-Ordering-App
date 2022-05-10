#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	cout<< "What would you like to eat?" <<endl;
	string food;
	getline(cin,food);
	cout<< "What whould you like to drink?" <<endl;
	string drink;
	getline(cin,drink);
	cout<< "What is the price of the food?" <<endl;
	double price;
	cin>> price;
	cout<<"What is the price of the drink?" <<endl;
	double Dprice;
	cin>> Dprice;
	cout<<"How much whould you like to tip us?"<<endl;
	double tip;
	cin>> tip;
	
	
	double total = price+Dprice+tip*(price+Dprice);
	cout<<"You have ordered "<<food<<" and "<<drink<<" as your drink.\n"<< "Your total is:"<<total;
	
	
	return 0;
}



