#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Watch{
	public:
		string brand;
		string color;
		double price;
		double weight;
		void print(){
			cout <<fixed<<setprecision(2)<< brand << " " << color << " " << price/weight << endl;
		}
};

int main(){
	Watch a1;
	Watch a2;
	cin>>a1.brand>>a1.color>>a1.price>>a1.weight;
	cin>>a2.brand>>a2.color>>a2.price>>a2.weight;
	a1.print();
	a2.print();
}
