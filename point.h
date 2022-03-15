#include <iostream>
using namespace std;

#ifndef cpp_point_h
#define cpp_point_h

class Point {

//attributs 
private:
  float x, y;

public:
//construteurs
Point(); // initialisation à l'origine
Point(float abs, float ord);
Point(Point const &p); 

//accesseurs (avec const comme n'altère pas l'état de l'objet)
float getX() const;
float getY() const;

//mutateurs
void setX(float abs);
void setY(float ord);

//méthodes
void translater(Point p);
void translater(float abs, float ord);

void operator+=(Point const&p1);//+=

};

//surcharge des opérateurs
ostream& operator<<(ostream&s, Point const &p); //<<

#endif 