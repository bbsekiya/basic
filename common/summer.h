//hot fix 071715
// 10-9-15 : int x1, int x2 added in the class
//           added constructor
// 11-05-15 : added shared_ptr include
#include <string>
#include <boost/shared_ptr>
class Summer
{
	int x1;
	int x2;

	std::string mystring;

	
	Summer(int n1, int n2) : x1(n1), x2(n2) {}

};

