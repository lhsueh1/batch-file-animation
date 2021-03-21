#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* For testing
prints HAPPY BIRTHDAY and clears the terminal*/

int main() {

	printf(" _   _    _    ____  ______   __\n");
	printf("| | | |  / \\  |  _ \\|  _ \\ \\ / /\n");
	printf("| |_| | / _ \\ | |_) | |_) \\ V / \n");
	printf("|  _  |/ ___ \\|  __/|  __/ | |  \n");
	printf("|_| |_/_/   \\_\\_|   |_|    |_|  \n");

	printf(" ____ ___ ____ _____ _   _ \n| __ )_ _|  _ \\_   _| | | |\n|  _ \\| || |_) || | | |_| |\n| |_) | ||  _ < | | |  _  |\n|____/___|_| \\_\\|_| |_| |_|\n");
	printf(" ____    _ __   __\n|  _ \\  / \\ \\ / /\n| | | |/ _ \\ V / \n| |_| / ___ \\| |  \n|____/_/   \\_\\_| \n");
    sleep(1);
	printf("%c[2J%c[;H",(char) 27, (char) 27); 

	return 0;
}
