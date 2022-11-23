#include<bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}();

class Rectangle{ 
private: 
    double length; 
    double height;
    static int count; //Static data member
    
public: 
    //Constructor 
    Rectangle(); //default
    Rectangle(double l, double h); //Param 
    
    Rectangle( const Rectangle & rect); //copy 
    //Destructor 
    ~Rectangle(); 
    
    //Accessor member (Getter)
    void print() const; 
    double getArea() const; 
    double getPerimeter() const; 
    double getHeight() const; 
    double getLength() const; 
    
    //Setter
    void setLength(double l); 
    void setHeight(double h); 
    
    //Static member function 
    static int getCount(); 


};

//static variable
int Rectangle::count = 0; 

//? Constructor

Rectangle::Rectangle(double h, double l):length(l),height(h){ 
    if (l < 0 || h < 0){ 
        cout << "Program terminated, out of scope!" << endl; 
        assert(false); 
    }
    count++; 
}

// Rectangle::Rectangle(const Rectangle & rect) : length(rect.getLength()), height(rect.getHeight()){ 
//     count++; 
// }
//or 
Rectangle::Rectangle(const Rectangle & rect): length(rect.length),height(rect.height){ 
    count++; 

}
Rectangle::Rectangle():height(1.0),length(1.0){ 
    count++; 
}

//Setter 
double Rectangle::getArea() const{ 
    return this -> length * this -> height; 

}

double Rectangle::getPerimeter() const{ 
    return 2 * ((*this).length + (*this).height); 

}

//Destructor
Rectangle::~Rectangle(){ 
    count--; 

}


//static function 
int Rectangle::getCount(){
    return count; 
}



int main() {
    fast_io; 
    Rectangle rect1(3,5); 
    cout <<"Rect1 count: " <<  rect1.getCount() << endl; 
    Rectangle rect2(5,3); 
    Rectangle rect3; 
    Rectangle rect4(rect1); 
    Rectangle rect5(rect2); 
    cout << "Rect5 area: " << rect5.getArea() << endl; 
    cout << "Rect5 count: " << rect5.getCount() << endl; 
    cout << "Count of objects: " << Rectangle::getCount() << endl;
    return EXIT_SUCCESS;
}