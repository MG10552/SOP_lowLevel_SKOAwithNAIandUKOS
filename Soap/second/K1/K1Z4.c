#include <stdio.h>

int main(){
//podaj ilość wierszy macierzy =
//podaj pierwszy wiersz 
//podaj n-ty wiersz
//wyswietl macierz

int ilosc, v, b, n, m;
printf("Podaj ilość wierszów w Twojej macierzy: ");
scanf("%d", &ilosc);
	if (ilosc<1 || ilosc>50) { 
  		printf("Niedozwolona ilość, zrestartuj program i spróbuj ponownie. \n");
  		return 0;
	}

	for (v=0; v < ilosc; v++){
	printf("Ile arg w tym wierszu?\n");
	scanf("%d", &b);
	printf("Podaj je. \n");
		for (n=0; n < b; n++){
		 scanf("%d", &m);}
}
printf("Twoja macierz wygląda tak: %d %d %d\n",v , m);
	return 0;
}
