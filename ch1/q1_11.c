#include <stdio.h>

int putDigitsLen( int );

int main( void ) {
	int num;

	printf( "unsigned int num: " );
	scanf( "%u", &num );

	while( num <= 0 ) {
		printf( "0 보다 큰수를 입력해주세요. a >> " );
		scanf( "%u", &num );
	}
	
	printf( "digits length: %d\n", putDigitsLen( num ) );

	return 0;
}

int putDigitsLen( int num ) {
	int i;	

	while( num > 0 ) {
		num /= 10;	
		i++;
	}

	return i;
}
