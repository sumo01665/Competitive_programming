#include <iostream> 
#include <cstdlib>
#include <ctime>


using namespace std; 



class RandomInteger{ 
private:
    int low; 
    int high; 
    int value; 
    
    
public: 
    RandomInteger(int low, int high); 
    ~RandomInteger(); 
    //Preventing a synthesized copy constructor
    RandomInteger(const RandomInteger & random) = delete; 
    void print() const; 


}; 


RandomInteger::RandomInteger(int lw, int hgh):low(lw),high(hgh){
        srand(time(0)); 
        int temp = rand(); 
        
        //random number
        value = temp % (high - low + 1) + low; 
        
}

RandomInteger::~RandomInteger(){ 



}


void RandomInteger::print() const{ 
    cout << value << endl; 

}

int main(){ 
    int i1 = 100, i2 = 200; 
    
    RandomInteger r1(i1, i2); 
    printf("Random integer between %d and %d are: ", i1, i2); 
    r1.print();
    
    
    int rand2_1 = 400, rand2_2  = 600; 
    RandomInteger r2(rand2_1, rand2_2); 
    printf("Random integer between %d and %d are: ",rand2_1,rand2_2); 
    r2.print();
    
    
    
    
}
