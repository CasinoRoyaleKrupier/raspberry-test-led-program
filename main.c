#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	wiringPiSetupGpio();
	pinMode(21, OUTPUT);
	system("clear");
	printf("Test gpio pins\n");
	delay(1000);
	system("clear");

	for(;;) {
		digitalWrite(21, HIGH);
		printf("LED: On\n");
		delay(1000);
		system("clear");
		digitalWrite(21, LOW);
		printf("LED: Off\n");
		delay(1000);
		system("clear");
	}

	return 0;
}
