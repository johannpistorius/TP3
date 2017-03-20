#include <iostream>

using namespace std;

point::point(float newX, float newY){
    x = newX;
    y = newY;
}
void point::affiche(){
    cout<<"x :"<<x<<" - y : "<<y<<endl;
}
void point::deplace(float addX,float addY){
    x+=addX;
    y+=addY;
}
