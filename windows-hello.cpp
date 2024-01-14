#include <windows.h>
#include <stdint.h>


// OS SERVICES HERE:

void OSDep_Greet()
{
	HANDLE StdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	const uint8_t Buffer[] = "Hello Windows!\n";
	DWORD BufferLen = 15;
	DWORD NumBytesWritten;
	WriteFile(StdOut, Buffer, BufferLen, &NumBytesWritten, NULL);
}


// OS AGNOSTIC CODE HERE:
#include "hello.cpp"


// OS DEPENDENT CODE HERE:

int main()
{
	GreetCountTimes(4);

	return 0;	
}