#ifndef _COMPRESS
#define _COMPRESS


void Print_tab(int tab[],int n);
void Init_tab(int max,int tab[], int n);
void Exchange(int tab[], int i, int j);

void Sort_By_Selection(int tab[],int n);
void Bubble_Sorting(int tab[],int n);
void Sort_By_Insert(int tab[],int n);
void Quick_sort(int tab[], int n);

void Delete_Table(int *tab);
int* Create_Table(int t);

#endif
