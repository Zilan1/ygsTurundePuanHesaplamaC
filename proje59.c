#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//YGS turunde puan hesaplama
	
	//Turkce:1.999
	//Matematik:3.998
	//Sosyal:1
	//Fen:2.999
	//Taban:100.160
	
	float turkce,matematik,sosyal,fen,taban,tpuan;
	
	taban=100.160;
	
	printf("Turkce Netinizi Giriniz: ");
	scanf("%f",&turkce);
	
	printf("Matematik Netinizi Giriniz: ");
	scanf("%f",&matematik);
	
	printf("Sosyal Netinizi Giriniz: ");
	scanf("%f",&sosyal);
		
	printf("Fen Netinizi Giriniz: ");
	scanf("%f",&fen);
	
	tpuan=turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
	
	printf("Sonucunuz: %.0f",tpuan);
	
	
	
	
	
	
	//printf("*****Cemberde Alan ve Cevre Hesabi*****\n\n");
	
	//float ycap,pi,alan,cevre;
	//pi=3.14;

	//printf("Yaricap Degerini Giriniz: ");
	//scanf("%f",&ycap);
	
	//alan=pi*ycap*ycap;
	//cevre=2*pi*ycap;
	
	//printf("Alan: %.2f\n",alan);
	//printf("Cevre: %.2f",cevre);
	
//	.,
	
	
	
	//Aylik 2500 tl maas alan kisinin maasina %12 zam yapilirsa yeni maasi 
	
	//printf("*****Yeni Maas Hesabi*****\n\n");
	
	//float maas,ymaas;
	
	//printf("Maasinizi Giriniz: ");
	//scanf("%f",&maas);
	
	//ymaas=maas+maas*12/100;
	
	//printf("Yeni Maasiniz: %.0f",ymaas);
	
	
	
	
	
	//float s1,s2,toplam;
	
	//printf("Ilk Sayiyi giriniz: ");
	//scanf("%f",&s1);
	
	//printf("Ikinci Sayiyi Giriniz: ");
	//scanf("%f",&s2);
	
	//toplam=s1+s2;
	
	//printf("Toplam:%.2f",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
