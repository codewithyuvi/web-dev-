#include <iostream> 
using namespace std; 
int main()
{
	char s1[6] = "Hello";
	char s2[6] = "World";
	char s3[12] = s1 + " " + s2;
	cout<<s3;
	return 0;
}
