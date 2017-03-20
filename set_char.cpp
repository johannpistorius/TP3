#include <iostream>

using namespace std;

set_char::set_char(){
    cardinal=0;
}
void set_char::ajouter(char caractere){
    car[cardinal++] = caractere;
}
void set_char::numElem(){
    cout<<"Cardinalite :"<<cardinal<<endl;
}
void set_char::testChar(char caractere){
    bool test = false;
    for(int i=0;i<cardinal;i++){
        if(car[i]==caractere){
            test=true;
        }
    }
    if(test==true){
        cout<<"Le caractere "<< caractere <<" lui appartient"<<endl;
    }
    else{
        cout<<"Le caractere "<< caractere <<" ne lui appartient pas"<<endl;
    }
}
