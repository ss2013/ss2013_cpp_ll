#include <stdio.h>
#include <string.h>

#define MAX_LEN 201

int main() {
	char encrypt_str[MAX_LEN], str_maxtrix[MAX_LEN][MAX_LEN];
	int cols, rows, len;
	int i, j;

	scanf("%d", &cols);
	while(cols != 0) {
		scanf("%s", encrypt_str);
		len = strlen(encrypt_str);
		rows = len / cols;

		i = 0;
		while(1) {
			if((i / cols) % 2 == 0) {
				for(j = 0; j < cols; j++) {
					str_maxtrix[i / cols][j] = encrypt_str[i];
					i++;
				}
			} else {
				for(j = cols - 1; j >= 0; j--) {
					str_maxtrix[i / cols][j] = encrypt_str[i];
					i++;
				}
			}
			if(i >= len)
				break;
		}

		for(i = 0; i < rows; i++) {
			for(j = 0; j < cols; j++) 
				printf("%c", str_maxtrix[i][j]);
			printf("\n");
		}
		/*for(j = 0; j < cols; j++) {
			for(i = 0; i < rows; i++) {
				printf("%c", str_maxtrix[i][j]);
			}
		}*/
		printf("\n");

		scanf("%d", &cols);
	}

	return 0;
}