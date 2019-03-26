#include<stdlib.h>
#include"Sort_Table.h"
#include <stdio.h>
#include<time.h>

void Print_tab(int tab[],int n){
	for (int i = 0; i < n; i++)
		printf("%d\t",tab[i] );
	printf("\n");
}

void Init_tab(int max,int tab[], int n){
	for (int i = 0; i < n; i++)
		tab[i]=rand()%max;
}

void Exchange(int tab[], int i, int j){
	int c;
	c=tab[i];
	tab[i]=tab[j];
	tab[j]=c;
}

void Sort_By_Selection(int tab[],int n){
int min;
for (int j = 0; j < n; j++){
	min=j;
	for (int i = j; i < n; i++)
	if (tab[i]<tab[min])
		min=i;
	Exchange(tab,j,min);
	}
}

void Bubble_Sorting(int tab[],int n){
 for(int j=0;j<n;j++){
	for (int i = 0; i < n-j; i++)
		if (tab[i]>tab[i+1])
			Exchange(tab,i,i+1);

 }
}

void Sort_By_Insert(int tab[],int n){
 int c;
 int j;
 for(int i=1;i<n;i++){
	c=tab[i];
	j=0;
	while(tab[i]>tab[j] && j<i){
		j++;
	}

	for (int k = i; k >j; k--)
		tab[k]=tab[k-1];
	tab[j]=c;
	}
}

void Delete_Table(int *tab){
	free(tab);
}

int* Create_Table(int t){
	int *tab=(int *)malloc(t*sizeof(int));
	return(tab);
}

void Quick_sort(int tab[], int n){
	if (n>1)
		{
		int pivot = tab[0];
		//printf("pivot = %d\n",pivot);
		int *superieur = Create_Table(n);
		int *inferieur = Create_Table(n);
		int taille1= 0;
		int taille2= 0;

		for (int i = 1; i <n; i++)
		{
			if (tab[i]<=pivot){
				inferieur[taille1] = tab[i];
				taille1++;
			}
			else{
				superieur[taille2] = tab[i];
				taille2++;
			}
		}
		if (taille1>0)
			Quick_sort(inferieur,taille1);
		if (taille2>0)
			Quick_sort(superieur,taille2);
		for (int i = 0; i < taille1; i++)
			tab[i] = inferieur[i];
		tab[taille1]=pivot;
		for (int i = 0; i < taille2; i++)
			tab[i+taille1+1] = superieur[i];
		if (taille1>0)
			Delete_Table(inferieur);
		if (taille2>0)
			Delete_Table(superieur);
	}
}
