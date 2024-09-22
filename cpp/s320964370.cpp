#include <stdio.h>

int main() {
	char out[21];
	char in[21];
	int csr = 0;

	scanf("%s",in);
	for (int i = 0; i<20; i++) {
		if (!in[i])break;

		switch (in[i]) {
		case '0':
			out[csr] = '0';
			out[csr + 1] = '\0';
			csr++;
			break;

		case '1':
			out[csr] = '1';
			out[csr + 1] = '\0';
			csr++;
			break;

		case 'B':
			if (csr>0) {
				out[csr] == '\0';
				csr--;
			}
		}
	}
	printf("%s", out);
	while (1) {}
	return 0;
}
