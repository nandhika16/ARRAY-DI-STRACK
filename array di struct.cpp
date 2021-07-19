#include<stdio.h>
#include<stdlib.h>

#define maks 100 //maksimal array
typedef struct
{
	long int nip;
	char nama[30];
	char alamat[60];	
}data_dosen;
data_dosen dosen[maks]; //array of struct
main()
{
	int i,j;
	printf("Berapa data dosen ?");
	scanf("%i",&j);
	printf("\n");
	for(i=0;i<j;i++)
	{
		printf("Data dosen ke- %i\n",i+1);
		printf("-----------\n");
		printf("Nip :");
		scanf("%li",&dosen[i].nip);
		printf("Nama :"); fflush(stdin);
		gets(dosen[i].nama);
		printf("Alamat :"); fflush(stdin);
		gets(dosen[i].alamat);
		printf("\n\n");
	}
	for(i=0;i<j;i++)
	{
		printf("Data dosen ke- %i\n",i+1);
		printf("-----------\n");
		printf("Nip : %li\n",dosen[i].nip);
		printf("Nama : %s\n",dosen[i].nama);
		printf("Alamat : %s\n",dosen[i].alamat);
		printf("\n\n");
		
	}
}
