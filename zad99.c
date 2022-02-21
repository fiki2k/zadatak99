// Program treba parne i neparne elemente u polju naci i ispisat u vlastita polja.


#include<stdio.h>
void parni(int M[], int velicina);
void neparni(int M[], int velicina);
void ispis_polja(int M[], int velicina);

int main()
{
 int velicina, i, M[10];
 
 printf("\n unesi velicinu polja  :  ");
 scanf("%d", &velicina);
 
 printf("\nUnesi elemente polja :  ");
 for(i = 0; i < velicina; i++)
 {
      scanf("%d", &M[i]);
 }
 
 parni(M, velicina);
 neparni(M, velicina);
  
 return 0;
}
void parni(int M[], int velicina)
{
	int i, polje[10], brojac = 0;
	printf("\n Parni elementi u polju su:  ");
	for(i = 0; i < velicina; i ++)
	{
	 	if(M[i]%2 == 0)
 		{
 			polje[brojac] = M[i];
 			brojac++;
		}
	}
	ispis_polja(polje, brojac);
	printf(" Ukupan broj parnih brojeva u polju = %d ", brojac);
}
void neparni(int M[], int velicina)
{
	int i, polje[10], brojac = 0;
	printf("\n Neparni elementi u polju su: ");
	for(i = 0; i < velicina; i ++)
	{
	 	if(M[i]%2 != 0)
 		{
 			polje[brojac]  = M[i];
 			brojac++;
		}
	}
	ispis_polja(polje, brojac);	
	printf(" Ukupan broj neparnih brojeva u polju = %d ", brojac);
}
void ispis_polja(int M[], int velicina)
{
	int i;		
 	for(i = 0; i < velicina; i++)
  	{
      printf("%d \t ", M[i]);
    }
    printf("\n");
}
