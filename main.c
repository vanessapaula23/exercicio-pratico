#include <time.h>
#include <stdio.h>

// pega a data e hora atual e imprime na tela
int main()
{
	char dateStr[9];
	char timeStr[9];

	// pega a data atual
	_strdate( dateStr);
	_strtime( timeStr);

	if(timeStr<12){
	printf( "Good Morning! Today is %s %s\n", dateStr,timeStr);
	}if((timeStr>12)&&(timeStr<=18)){
	printf( "Good Evening! Today is %s %s\n", dateStr,timeStr);
	}
	if(timeStr>18){
	printf( "Good Night! Today is %s %s\n", dateStr,timeStr);
	}

	getchar();
	return 0;
}
