#include <iostream>


// single inhirite

class first{
    protected:
        int num;
    public:
        // first(){
        //     // std::cout << "the default constractor1 is called!\n";
        // }
        first(){
            num = 0;
        }
        first(int y){
            num = y;
        }
                void    set_protect(int a){
            num = 123;
        }
        void    display(){
            std::cout << "value of first is : " << num << std::endl;
        }
};

class second: protected first{

    // public:
    //     void    set_protect(int a){
    //         num = 123;
    //     }
    //     void    display(){
    //         std::cout << "value of first is : " << num << std::endl;
    //     }
};

int main(){

    second ob;
    ob.set_protect(1233);
    ob.display();
    // ob.num =12;

}