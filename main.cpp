#include <iostream>

using namespace std;

class Shape {
public:
      double area;
      double volume;
};

class Cube : public Shape {
public:
      double side;
      Cube (double side) {
            this -> side = side;
            this -> area = (side * side) * 6;
            this -> volume = side * side * side;
      }
};

class Sphere : public Shape {
public:
      double radius;
      Sphere (double radius) {
            const double pi = 3.141592;

            this -> radius = radius;
            this -> area = 4 * pi * (radius * radius);
            this -> volume = (4/3.0) * pi * (radius * radius * radius);
      }
};

int main(void) {
      Cube cube(10);
      Sphere sphere(10);

      cout << "Area of Cube: " << cube.area << "cm\n";
      cout << "Volume of Cube: " << cube.volume << "cm\n";

      cout << "Area of Sphere: " << sphere.area << "cm\n";
      cout << "Volume of Sphere: " << sphere.volume << "cm\n";

      return 0;
}

