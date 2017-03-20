#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

point2::point2(float newX, float newY, char car){
    x = newX;
    y = newY;
    name=car;
}
float point2::getX(){
    return x;
}
float point2::getY(){
    return y;
}
void point2::affiche(){
    cout<<name<<" : "<<"(x :"<<x<<" ; y : "<<y<<")"<<endl;
}
void point2::translation(float addX,float addY){
    x+=addX;
    y+=addY;
}
void point2::positionner(float newX, float newY){
    x=newX;
    y=newY;
}
void point2::positionner(point2 p){
    x = p.getX();
    y = p.getY();
}

point2 point2::milieu(point2 p){
    float newX = (x+p.getX())/2;
    float newY = (y+p.getY())/2;

    point2 milieu(newX,newY,'I');
    return milieu;
}
bool point2::comparer(point2 p){
    return (x == p.getX() && y== p.getY());
}

point2 point2::symetrique(){
    float newX = -x;
    float newY = -y;
    point2 sym(newX,newY,'S');
    return sym;
}

float point2::distance(point2 p){
    float d = sqrt(pow(x-p.getX(),2)+pow(y-p.getY(),2));
    return d;
}

void point2::rotation(float angle){
    float newX = x*cos(angle) - y*sin(angle);
    float newY = x*sin(angle) + y*cos(angle);
    x = newX;
    y = newY;
}
