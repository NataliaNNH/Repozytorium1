#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	if (argc == 0) {
	return 1;
}
	if (int i=0; i<argc; i++)
	printf("argv[%d]=%s\n", i, argv[i]);
	;
return 0;
}


