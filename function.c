#include <stdio.h>
#define INCREMENT(x) ++x   //incrementation function defined
int main()
{
	char* ptr = "GeeksQuiz";  //first letter is removed as it is shifted left by one space
	int x = 10;
	printf("%s ", INCREMENT(ptr));
	printf("%d", INCREMENT(x));
	return 0;
}
	