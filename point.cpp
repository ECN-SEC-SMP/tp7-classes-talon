#include <iostream>
#include "Point.h"
using namespace std;

//constructeurs
Point::Point(){
  this->x = 0;
  this->y = 0;
}

Point::Point(float abs, float ord){
  this->x = abs;
  this->y = ord;
}
Point::Point(const Point &p){//Point const & p
  this->x = p.x;
  this->y = p.y;
}

//accesseurs 
float Point::getX() const{
  return this->x;
}
float Point::getY() const{
  return this->y;
}

//mutateurs
void Point::setX(float abs){
  this->x = abs;
}
void Point::setY(float ord){
  this->y = ord;
}

//méthodes
void Point::translater(float abs, float ord){
  this->x += abs;
  this->y += ord;
}

void Point::translater(Point p){
  this->x += p.x;
  this->y += p.y;
}

ostream& operator<<(ostream&s, Point const &p){
  s<<"("<<p.getX()<<";"<<p.getY()<<")";//utilisation des accesseur car cette fonction n'a pas accès au attribut 
   return s;
}

void Point::operator+=(Point const &p) {
  this->x +=p.getX();
  this->y +=p.getY();
}

