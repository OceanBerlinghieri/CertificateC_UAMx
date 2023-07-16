/*#include <stdio.h>

int main() {
	int seasons, chapters;
	double duration, intro, total;

	printf("How many seasons has the series?: ");
	scanf_s("%d", &seasons);

	printf("How many chapters per season?: ");								//%lf or %f denotes the use of float or double in scanf
	scanf_s("%d", &chapters);

	printf("Duration of the chapters?: ");
	scanf_s("%lf", &duration);

	printf("Duration of the intro?: ");
	scanf_s("%lf", &intro);

	total = seasons * chapters * (duration - intro) / 60;

	printf("You have been watching the series for %.2lf hours", total);
	return 0;
}*/