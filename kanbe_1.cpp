#include <iostream>
#incldee <string>

class FizzBuzz{
    public:
        void set(int num);
        void check();
    private:
        int c_num;
};

void FizzBuzz::set(int num){
    c_num = num;
}

void FizzBuzz::check(){
    std::string f = "Fizz";
    std::string b = "Buzz";
    std::string e = "error";
    if(c_num % 15 == 0){
        std::cout << f + b << std::endl;
    } else if(c_num % 3 == 0){
        std::cout << f << std::endl;
    } else if(c_num % 5 == 0){
        std::cout << b << std::endl;
    } else{
        std::cout << e << std::endl;
    }
} 

int main(){
    FizzBuzz obj;
    int num;
    std::cin >> num;
    obj.set(num);
    obj.check();
    return 0;
}
