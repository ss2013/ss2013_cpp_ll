#include <stdio.h>

int year1, month1, day1;
int year2, month2, day2;
int mdays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void swap() {
	int tmp = year1;
	year1 = year2;
	year2 = tmp;
	tmp = month1;
	month1 = month2;
	month2 = tmp;
	tmp = day1;
	day1 = day2;
	day2 = tmp;
}

int isLeap(int year) {
	if(year % 400 == 0) return 1;
	if(year % 4 == 0 && year % 100 != 0) return 1;
	return 0;
}

int main() {
	int t, i;
	int ans = 0;
	scanf("%d", &t);
	while(t--) {
		scanf("%d.%d.%d", &year1, &month1, &day1);
		scanf("%d.%d.%d", &year2, &month2, &day2);

		if(year1 > year2) swap();
		else if(year1 == year2) {
			if(month1 > month2) swap();
			else if(month1 == month2 && day1 > day2) swap();
		}

		ans = 0;
		if(year1 == year2) {
			if(month1 == month2) {
				ans = day2 - day1;
				printf("%d\n", ans);
				continue;
			}

			if(isLeap(year1)) mdays[2] = 29;
			else mdays[2] = 28;

			ans += mdays[month1] - day1;
			for(i = month1 + 1; i < month2; i++) ans += mdays[i];
			ans += day2;

			printf("%d\n", ans);
			continue;
		}

		if(isLeap(year1)) mdays[2] = 29;
		else mdays[2] = 28;

		ans += mdays[month1] - day1;
		for(i = month1 + 1; i <= 12; i++) ans += mdays[i];
		for(i = year1 + 1; i < year2; i++) {
			if(isLeap(i)) ans += 366;
			else ans += 365;
		}

		if(isLeap(year2)) mdays[2] = 29;
		else mdays[2] = 28;
		for(i = 1; i < month2; i++) ans += mdays[i];
		ans += day2;

		printf("%d\n", ans);
	}
	return 0;
}