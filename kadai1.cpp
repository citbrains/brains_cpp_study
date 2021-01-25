#include <iostream>

class FizzBuzz{
    public:
        void set(int num);
        std::string check();
    private:
        int c_num;
};

void FizzBuzz::set(int num){
    c_num = num;
}

std::string FizzBuzz::check(){
    std::string f = "Fizz";
    std::string b = "Buzz";
    std::string n = "error";
    if(c_num % 15 == 0){
        return f + b;
    } else if(c_num % 3 == 0){
        return f;
    } else if(c_num % 5 == 0){
        return b;
    } else{
        return n;
    }
} 

int main(){
    FizzBuzz obj;
    int num;
    std::cin >> num;
    obj.set(num);
    std::cout << obj.check() << std::endl;
    return 0;
}
