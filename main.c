#include <stdio.h>
#include <stdlib.h>
#include "copy.h"

int main() {
	char* str1 = "IoT Hello! in Media laps\n";
	char* str2 = copy(str1);
	
	print("%s", str2);
	free(str2);

}
