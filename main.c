#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(int argc, char *argv[]) {
	char string[999] = {};
	/*char *string;
	string = malloc( _MAX_PATH );
	free( string );*/
	scanf("%s", &string);
	for(int i = 0; i < 999; i++){
		if( string[i] == ' '){
			break;
		}
		if (string[i] == 'a'){
			string[i] = 'A';
		}
		if (string[i] == 'b'){
			string[i] = 'B';
		}
	};
	printf("%s\n", string);
	return 0;
}