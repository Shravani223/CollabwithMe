#include<iostream>
#include<thread>
using namespace std;

void display()
{
	cout << "Hello World" << endl;
}
int main()
{
	std::thread t1(display);

	t1.join(); 
	cout << "from main" << endl;
	return 0;
}




