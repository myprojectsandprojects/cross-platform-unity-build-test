#include <unistd.h>
#include <stdint.h>


// OS SERVICES:

void OS_Greet()
{
	const uint8_t buf[] = "Hello Linux!\n";
	size_t count = 13;

	write(STDOUT_FILENO, buf, count);
}


// OS AGNOSTIC:
#include "hello.cpp"


// OS DEPENDENT:

int main()
{
	GreetCountTimes(3);

	return 0;
}