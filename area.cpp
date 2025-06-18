#include <iostream>
#include <cmath>
using namespace std;




class Shape {
public:
	virtual double getArea() = 0;       
	virtual double getPerimeter() = 0;  
};



class Circle : public Shape {

private:
	double radius;

public:
	Circle(double r) : radius(r) {}

	double getPerimeter() override {
		return 2*M_PI*radius;
	}

	double getArea() override {
		return M_PI * pow(radius,2);
	}
};


class Rectangle : public Shape {
private:
	double L, W;
public:
Rectangle(double l, double w): L(l), W(w) {}

	double getPerimeter() override {
		return 2*(L+W);
	}
	double getArea() override {
		return L*W;
	}

};

class Triangle : public Shape {
private:
    double A, B, C;
public:
    Triangle(double a, double b, double c) :A(a), B(b), C(c){}

    double getPerimeter() override {
        return A + B + C;
    }

    double getArea() override {
        double s = (A + B + C) / 2; 
        return sqrt(s * (s - A) * (s - B) * (s - C));
    }
};





int main() {
   
   
   Shape* shapes[] = {new Circle(5), new Rectangle(2, 3)};
   
   
   for (int i = 0; i<2;i++){
       
       cout <<"Area: " <<shapes[i]->getArea()<< endl;
   }
   
   // delete
   for (int i = 0; i < 2; i++) {
    delete shapes[i];  
    }

   
   
   
   Circle cir1(6);
   cout<< "area : " << cir1.getArea()<< endl;
   
   
   
   
   
  /* Shape* shape[2];
   shape[0] = new Circle(5);
   shape[1] = new Rectangle(2.2, 3);
   
   for(int i=0; i<3; i++){
       cout << "Area : "<< shape[i]->getArea()<<endl;
       cout << "perimeter : "<< shape[i]->getArea()<<endl;
        
   }
    for(int i=0; i<3; i++){
       delete shape[i];
        
   }
    
	/*Shape* cir1 = new Circle(5);

	Shape* rec1 = new Rectangle(2.2, 3);
	
    Shape* tri1 = new Triangle(3, 4, 5); 
    
	cout <<"Circle area : "<< cir1->getArea() << endl;
	cout << "Circle perimeter : "<<cir1->getPerimeter() << endl;

	cout <<"Rectangle area : "<< rec1->getArea() << endl;
	cout << "Rectangle perimeter : "<<rec1->getPerimeter() << endl;

    cout <<"Triangle area : "<< tri1->getArea() << endl;
    cout << "Triangle perimeter : "<<tri1->getPerimeter() << endl;

    delete cir1;
    delete rec1;
    delete tri1;*/



	return 0;
}
