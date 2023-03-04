#include <iostream>
#include <iomanip>

using namespace std;

class Form
{
public:
	Form();
	Form(string type);
	virtual void calculate_Area() {};//baza de clasa nu are formule implicite, functii goale
	virtual void calculate_Perimeter() {};
	virtual void setSpecs() {};
	double getArea();
	double getPerimeter();
	void displaySpecs();
protected:
	string type;
	double Area, Perimeter;
};
Form::Form()
{
	type = "nedefinit";
	Area = Perimeter = 0.0;
}
Form::Form(string type)
{
	this->type = type;
}
double Form::getArea()
{
	return Area;
}
double Form::getPerimeter()
{
	return Perimeter;
}
void Form::displaySpecs()
{
	cout << endl << Area << " " << Perimeter << " " << type << endl;
}

class Circle :public Form
{
public:
	Circle();
	void setSpecs();
	void calculate_Area();
	void calculate_Perimeter();
protected:
	double radius;
};
Circle::Circle()
{
	radius = 0.0;
}
void Circle::setSpecs()
{
	cin >> radius;
}
void Circle::calculate_Area()
{
	Area = 3.14 * radius * radius;
}
void Circle::calculate_Perimeter()
{
	Perimeter = 2.0 * 3.14f * radius;
}

class Square :public Form
{
public:
	Square();
	void setSpecs();
	void calculate_Area();
	void calculate_Perimeter();
protected:
	double side;
};
Square::Square()
{
	side = 0.0;
}
void Square::setSpecs()
{
	cin >> side;
}
void Square::calculate_Area()
{
	Area = side * side;
}
void Square::calculate_Perimeter()
{
	Perimeter = 4.0 * side;
}

class Rectangle :public Form
{
public:
	Rectangle();
	void setSpecs();
	void calculate_Area();
	void calculate_Perimeter();
protected:
	double length, width;
};
Rectangle::Rectangle()
{
	length = 0.0;
	width = 0.0;
}
void Rectangle::setSpecs()
{
	cin >> width >> length;
}
void Rectangle::calculate_Area()
{
	Area = length * width;
}
void Rectangle::calculate_Perimeter()
{
	Perimeter = width + width + length + length;
}

class Triangle :public Form
{
public:
	Triangle();
	void setSpecs();
	void calculate_Area();
	void calculate_Perimeter();
protected:
	double base, heigth;
};
Triangle::Triangle()
{
	base = 0.0;
	heigth = 0.0;
}
void Triangle::setSpecs()
{
	cin >> base >> heigth;
}
void Triangle::calculate_Area()
{
	Area = heigth * base / 2.0;
}
void Triangle::calculate_Perimeter()
{
	Perimeter = 3.0 * base;
}

class Sketch :public Form
{
public:
	Sketch();
	Sketch(string type, string isColored, double cost_color, double cost_preision, double thickness);
	void calculate_Occupied_Memory();
	double getOccupied_Memory();
private:
	int hasColor;
	double cost_precision, thickness, cost_color;
	double occupied_memory;
	string isColored;
};
Sketch::Sketch()
{
	hasColor = 0;
	cost_precision = thickness = occupied_memory = cost_color = 0.0;
}
Sketch::Sketch(string type, string isColored, double cost_color, double cost_precision, double thickness) :Form(type)
{
	this->isColored = isColored;
	this->cost_color = cost_color;
	this->cost_precision = cost_precision;
	this->thickness = thickness;
	occupied_memory = 0.0;
	Form* pointer = NULL;
	Circle C;
	Square S;
	Rectangle R;
	Triangle T;
	if (type == "CERC")
		pointer = &C;
	if (type == "PATRAT")
		pointer = &S;
	if (type == "DREPTUNGHI")
		pointer = &R;
	if (type == "TRIUNGHI")
		pointer = &T;
	pointer->setSpecs();
	pointer->calculate_Area();
	pointer->calculate_Perimeter();
	Area = pointer->getArea();
	Perimeter = pointer->getPerimeter();
}
void Sketch::calculate_Occupied_Memory()
{
	if (isColored == "COLORATA")
		hasColor = 1;
	else
		hasColor = 0;
	occupied_memory = thickness * cost_precision * Perimeter + Area * cost_color * hasColor;
}
double Sketch::getOccupied_Memory()
{
	return occupied_memory;
}

class Catalog
{
public:
	Catalog(int size, double cost_p1, double cost_p2, double cost_pe, double cost_color);
	void sortByMemory();
	void displayMemory();
private:
	Sketch* catalog;
	int size;
	double cost_p1, cost_p2, cost_p3, cost_color;
};
Catalog::Catalog(int size, double cost_p1, double cost_p2, double cost_p3, double cost_color)
{
	this->size = size;
	this->cost_p1 = cost_p1;
	this->cost_p2 = cost_p2;
	this->cost_p3 = cost_p3;
	this->cost_color = cost_color;
	catalog = new Sketch[size];
	double thickness;
	int precision_type;
	string type, isColored;
	for (int i = 0; i < size; ++i)
	{
		cin >> thickness >> precision_type >> isColored >> type;
		if (precision_type == 1 && thickness >= 10)
			*(catalog + i) = Sketch(type, isColored, cost_color, cost_p1, thickness);
		else
			if (precision_type == 2 && thickness >= 5)
				*(catalog + i) = Sketch(type, isColored, cost_color, cost_p2, thickness);
			else
				if (precision_type == 3)
					*(catalog + i) = Sketch(type, isColored, cost_color, cost_p3, thickness);
		//nu ai specificat ce fac daca limitele grosimii sunt incompatibile cu precizia data!!!! dc le ai mai pus acolo?
	}
}
void Catalog::sortByMemory()
{
	for (int i = 0; i < size; ++i)
		(catalog + i)->calculate_Occupied_Memory();
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if ((catalog + i)->getOccupied_Memory() > (catalog + j)->getOccupied_Memory())
			{
				Sketch copie = *(catalog + i);
				*(catalog + i) = *(catalog + j);
				*(catalog + j) = copie;
			}
		}
	}
}
void Catalog::displayMemory()
{
	cout << endl;
	for (int i = 0; i < size; ++i)
		cout << fixed << setprecision(2) << (catalog + i)->getOccupied_Memory() << " ";
}

int main()
{
	double x, y, z, w;
	int n;
	cin >> x >> y >> z >> w >> n;
	Catalog catalog(n, x, y, z, w);
	catalog.sortByMemory();
	catalog.displayMemory();
	return 0;
}