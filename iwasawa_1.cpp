#include <iostream>
#include <string>
#include <bits/stdc++.h>
class FizzBuzz{
public:
    void set(int num);
    int judge();
    void F_out();
private:
    int p_num;
    int F;
};

void FizzBuzz::set(int num){
    p_num = num;
}

int FizzBuzz::judge(){
    
    if(p_num % 3 == 0 && p_num % 5 == 0){ 
        F = 15;       
        return F;   
    }
    else if(p_num % 3 == 0){
        F = 3;
        return F;
    }
    else if(p_num % 5 == 0){
        F = 5;
        return F;
    }
    else{
        F = 0;
        return F;
    }
}

void FizzBuzz::F_out(){
    if(FizzBuzz::judge() == 15){
        std::cout << "FizzBuzz" << std::endl;
    }
    else if(FizzBuzz::judge() == 3){
        std::cout << "Fizz" << std::endl;
    }
    else if(FizzBuzz::judge() == 5){
        std::cout << "Buzz" << std::endl;
    }    
    else if(FizzBuzz::judge() == 0){
        std::cout << "not" << std::endl;
    }
    
}

int main(){
    FizzBuzz obj;
    int get_num;

    std::cin >> get_num;
    obj.set(get_num);
    obj.judge();
    obj.F_out();

    return 0;
}