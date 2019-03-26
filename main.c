#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Sort_Table.h"
int main(int argc, char const *argv[])
{
	double p;
	clock_t start,end;
	srand(time(NULL));
	int tab[50000];

	/*printf("---echanger premier et dernier element----\n");

	init_tab(9,tab,50000);
	//affiche_tab(tab,5);
	ech(tab,0,4);
	//affiche_tab(tab,5);*/
	printf("----------Sort By Selection----------------\n");

	Init_tab(9,tab,50000);
	//affiche_tab(tab,5);
	start=clock();
	Sort_By_Selection(tab,50000);
	end=clock();
	p=(double)(end-start)/ CLOCKS_PER_SEC;
	printf("The execution time is : %lf secondes\n",p );
	//affiche_tab(tab,5);

	printf("------------Bubble Sorting-----------------\n");

	Init_tab(9,tab,50000);
	//affiche_tab(tab,5);
	start=clock();
	Bubble_Sorting(tab,50000);
	end=clock();
	p=(double)(end-start)/ CLOCKS_PER_SEC;
	printf("The execution time is : %lf secondes\n",p );
	//affiche_tab(tab,5);
	printf("----------Sort By Insertion----------------\n");

	Init_tab(9,tab,50000);
	//affiche_tab(tab,5);
	start=clock();
	Sort_By_Insert(tab,50000);
	end=clock();
	p=(double)(end-start)/ CLOCKS_PER_SEC;
	printf("The execution time is : %lf secondes\n",p );
	//affiche_tab(tab,5);
	printf("---------------Quick Sort------------------\n");

	Init_tab(9,tab,5);
	//affiche_tab(tab,5);
	start=clock();
	Quick_sort(tab,50000);
	end=clock();
	p=(double)(end-start)/ CLOCKS_PER_SEC;
	printf("The execution time is : %lf secondes\n",p );
	//affiche_tab(tab,5);
	printf("---------------------------------------\n");

return 0;
}
