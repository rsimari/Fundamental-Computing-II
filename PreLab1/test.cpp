#include <iostream>
using namespace std;
class Mystery {
private:
	int a, b;
public:
	Mystery( int x, int y );
	~Mystery();
	void flob();
};
Mystery::Mystery( int x, int y ) {
	a = x+y;
	b = x-y;
	cout << "hello " << a << endl;
}
Mystery::~Mystery() {
	cout << "goodbye " << b << endl; // pops the last declared first
}
void Mystery::flob()
{
	cout << "flob " << (a+b) << endl;
}
Mystery g(10,20); // a = 30, b = -10
				  
int main() {
	Mystery a(60,20); // a = 80, b = 40			  
	a.flob(); 
	Mystery b(60,50); // a = 110, b = 10			      
	g.flob(); 
	b.flob(); 
	
	return 0;
}
// hello 30
// hello 80
// flob 120
// hello 110
// flob 20
// flob 120
// goodbye 10
// goodbye 40
// goodbye -10