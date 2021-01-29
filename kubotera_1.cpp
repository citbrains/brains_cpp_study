#include <iostream>

class FizzBuzz{
    public:
        void set(int num);
        void check();

    private:
        int c_num;
};

void FizzBuzz::set(int num){
    c_num = num;
    check();
}

void FizzBuzz::check(){
    std::string str;

    if(c_num % 3 == 0)
        str += "Fizz";

    if(c_num % 5 == 0)
        str += "Buzz";

    if(str.empty())
        str += "Error";

    std::cout << str << std::endl;
} 

int main(){
    FizzBuzz obj;
    int num;
    
    std::cin >> num;
    obj.set(num);

    return 0;
}
