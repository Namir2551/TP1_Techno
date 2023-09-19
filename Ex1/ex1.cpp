
#include <iostream>


// appele des methodes 
void trierTab(int*tab, int taille);
void afficherTab( int *tab, int taille );
bool egalite( int tab1[ ], int tab2[ ], int taille );
bool egalitePtr( int *tab1, int *tab2, int taille );
int * concatenerTab( int *tab1, int *tab2, int taille );

int main(){


    const int NB_ELEMENTS = 10;
    int tableau1[] = {22, 44, 12, 61, 4, 99, 33, 17, 15, 123};
    int tableau2[] = {22, 33, 44, 61, 4, 99, 12, 17, 123, 15};
    int tableau3[] = {22, 44, 12, 61, 4, 99, 33, 17, 15, 123};


    return 0;
}


// ========== methode ===========

void trierTab(int*tab, int taille){
    int i = 0;
    int j = 0;
    while (i < taille - 1) {
        while (j < taille - i - 1) {
            if (tab[j] > tab [j + 1]) {
                int temp = tab[j];
                tab[j] = tab [j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

void afficherTab(int *tab, int taille ){
    std::cout << "tableau contient: ";
    for (int i = 0; i < taille; i++) {
        std::cout <<tab;

        if(i < taille -1){
            std::cout<<" , ";
        }
        tab++;

    }
    std::cout << std::endl;

}

bool egalite( int tab1[ ], int tab2[ ], int taille ){
    int i = 0;
    while (i < taille)
    {
        if (tab1[i] != tab2[i])
        {
            return false;
        }
        i++;
    }
    return true;
}

bool egalitePtr( int *tab1, int *tab2, int taille ){
    int i = 0;
    while (i < taille)
    {
        if (*(tab1 + i) != *(tab2 + i))
        {
            return false;
        }
        i++;
    }
    return true;
}

int * concatenerTab( int *tab1, int *tab2, int taille ){
    int *tab = new int[taille * 2];
    int i = 0;
    while(i < taille) {
        tab[i] = tab1[i];
        i++;
    }
    while(i < taille * 2) {
        tab[i] = tab2[i];
        i++;
    }
}
