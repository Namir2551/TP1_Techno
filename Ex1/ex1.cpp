
#include <iostream>

using namespace std;
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



    int *tableauConcat = concatenerTab(tableau1,tableau2,NB_ELEMENTS);
    afficherTab(tableau1,NB_ELEMENTS);
    afficherTab(tableau2,NB_ELEMENTS);
    afficherTab(tableau3,NB_ELEMENTS);
    //std::cout<<"Tableau concat"<<tableauConcat<<endl;
    afficherTab(tableauConcat,NB_ELEMENTS * 2);

    
    if(egalite(tableau1,tableau2,NB_ELEMENTS)){ // true
        cout<<"Le tableau 1 est egale au tableau 2"<<endl;
    }else
    {
        cout<<"Le tableau 1 N'EST PAS EGALE au tableau 2"<< endl;
    }

    if(egalite(tableau1,tableau3,NB_ELEMENTS)){ // true
        cout<<"Le tableau 1 est egale au tableau 3"<<endl;
    }else
    {
        cout<<"Le tableau 1 N'EST PAS EGALE au tableau 3"<< endl;
    }


    if(egalitePtr(tableau1,tableau2,NB_ELEMENTS)){ // true
        cout<<"Le pointeur Tab 1 est egale au pointeur Tab 2"<<endl;
    }else
    {
        cout<<"Le pointeur Tab 1 N'EST PAS EGALE au pointeur Tab 2"<< endl;
    }


    if(egalitePtr(tableau1,tableau3,NB_ELEMENTS)){ // true
        cout<<"Le pointeur Tab 1 est egale au pointeur Tab 3"<<endl;
    }else
    {
        cout<<"Le pointeur Tab 1 N'EST PAS EGALE au pointeur Tab 3"<< endl;
    }
    

    trierTab(tableau1,NB_ELEMENTS);
    trierTab(tableau2,NB_ELEMENTS);
    trierTab(tableau3,NB_ELEMENTS);
    trierTab(tableauConcat,NB_ELEMENTS*2);


    
    afficherTab(tableau1,NB_ELEMENTS);
    afficherTab(tableau2,NB_ELEMENTS);
    afficherTab(tableau3,NB_ELEMENTS);
    afficherTab(tableauConcat,NB_ELEMENTS * 2);

    if(egalitePtr(tableau1,tableau2,NB_ELEMENTS)){ // true
        cout<<"Le pointeur Tab 1 est egale au pointeur Tab 2"<<endl;
    }else
    {
        cout<<"Le pointeur Tab 1 N'EST PAS EGALE au pointeur Tab 2"<< endl;
    }


    if(egalitePtr(tableau1,tableau3,NB_ELEMENTS)){ // true
        cout<<"Le pointeur Tab 1 est egale au pointeur Tab 3"<<endl;
    }else
    {
        cout<<"Le pointeur Tab 1 N'EST PAS EGALE au pointeur Tab 3"<< endl;
    }



    


    return 0;
}


// ========== methode ===========

void trierTab(int* tab, int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}


void afficherTab(int *tab, int taille ){
    std::cout << "tableau contient: ";
    for (int i = 0; i < taille; i++) {
        std::cout <<*tab;

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
    int u  = 0;
    while(i < taille * 2) {
        tab[i] = tab2[u];
        i++;
        u++;
    }

    return tab;
    
}
