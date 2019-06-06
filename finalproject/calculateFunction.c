#include <stdio.h>
#include <math.h>
#include <string.h>

//char[255] removeSpace (char inputString[255]) {
//    for (int i = 0; i < strlen(inputString); i++) {
//	if (inputString[i] = " ") {
//    }
//}
float Convert (char FromCurrency[255], char ToCurrency[255], int start) {
  
  if (strcmp(FromCurrency, "dollar") == 0) {
    
  }
}

float currencyExchange (char inputString[255]) {
    int count = 0;
    int* pos1;
    int* pos2;
    int index;
    char currencyFrom[255];
    char currencyTo[255];
    char currencyTemp[255];
    char currencyArray[][255] = {"euro", "pound", "rupee", "dollar"};
    for(int i = 0; i<4; i++) {
	if (strstr(inputString, currencyArray[i])) {
	    count++;
	    if (count == 1) {
	      pos1 = strstr(inputString, currencyArray[i]);
		    strcpy(currencyFrom, currencyArray[i]);
	    }
	    else if (count == 2) {
		    pos2 = strstr(inputString, currencyArray[i]);
    		strcpy(currencyTo, currencyArray[i]);
	    }
	    else {
		printf("Too many currencies\n");
		break;
	    }
	}
    }
    if (count < 2) {
	printf("Input 2 distinct currencies\n");
	return(0);
    }
    if (pos1 > pos2) {
	printf("To %s From %s\n", currencyTo, currencyFrom);
	strcpy(currencyTemp, currencyFrom);
	strcpy(currencyFrom, currencyTo);
	strcpy(currencyTo, currencyTemp);
	printf("To %s From %s\n", currencyTo, currencyFrom);
    }
    for (int i = 0; i < strlen(inputString); i++) {
	if (inputString[i] == currencyFrom[0]) {
	    index = i;
	    break;
	}
    }
  char money[255];
  memcpy(money, &inputString[0], index-1); 
  printf("%s\n", money);
  
}
int main() {
    currencyExchange("5000 dollars to euros");
}
