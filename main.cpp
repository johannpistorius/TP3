#include "header.h"
#include "point.cpp"
#include "point2.cpp"
#include "set_char.cpp"

using namespace std;

int main()
{
    //exo1
    point p(1,1);
    p.affiche();
    p.deplace(2,3);
    p.affiche();
    //exo2
    set_char sc;
    sc.numElem();
    sc.ajouter('j');
    sc.numElem();
    sc.testChar('j');
    sc.testChar('k');
    //exo3
    point2 A(1,1,'A');
    point2 B(2,2,'B');
    point2 C(3,3,'C');
    point2 origine(0,0,'origine');
    A.affiche();
    B.affiche();
    C.affiche();
    cout<<"Translation du point B par 10 :"<<endl;
    B.translation(10,10);
    B.affiche();
    cout<<"Positionnement du point A aux coordonnees (3,8)"<<endl;
    A.positionner(3,8);
    A.affiche();
    cout<<"Positionnement du point C aux coordonnees du point B:"<<endl;
    C.positionner(B);
    C.affiche();
    cout<<"La distance entre A et l'origine :"<<origine.distance(A)<<endl;
    cout<<"La distance entre A et B : "<<A.distance(B)<<endl;
    point2 milieuAetC=A.milieu(C);
    cout<<"Le milieu entre A et C : ";
    milieuAetC.affiche();
    cout<<"Comparaison"<<endl;
    if(C.comparer(B)){
        cout<<"Les points B et C coincident"<<endl;
    }
    else{
        cout<<"Les points B et C ne coincident pas"<<endl;
    }
    cout<<"Le symetrique du point C"<<endl;
    point2 symC=C.symetrique();
    symC.affiche();
    cout<<"Le point A apres rotation de 45 degres : "<<endl;
    A.rotation(45);
    A.affiche();
    cout<<"Les deux points les plus proches sont : "<<endl;
    float distAB=A.distance(B);
    float distAC=A.distance(C);
    float distBC=B.distance(C);
    if(distAB<distAC && distAB<distBC){
        A.affiche();
        B.affiche();
    }
    else if(distBC<distAC && distBC<distAB){
        B.affiche();
        C.affiche();
    }
    else{
        A.affiche();
        C.affiche();
    }

    return 0;
}
