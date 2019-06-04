#include <stdio.h>
#include <math.h>
#include <string.h>

float currencyExchange (char inputString[255]) {
    int count = 0;
    char* pos1;
    char* pos2;
    char currencyFrom[255];
    char currencyTo[255];
    char currencyArray[][255] = {"euro", "pound", "rupee", "dollar"};
    for(int i = 0; i<4; i++) {
	if (strstr(inputString, currencyArray[i])) {
	    count++;
	    if (count == 1) {
	        pos1 = strstr(inputString, currencyArray[i]);
		printf("%d\n", pos1);
	    }
	    else if (count == 2) {
		pos2 = strstr(inputString, currencyArray[i]);
		printf("%d\n", pos2);
	    }
	    else {
		printf("Too many currencies\n");
		break;
	    }
	}
    }
}
int main() {
    currencyExchange("50 euro to dollars pounds");
}
