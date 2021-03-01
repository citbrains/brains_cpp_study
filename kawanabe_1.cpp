#include<iostream>

class FizzBuzz{
  public:
    void set(int num);
    void check();
  private:
    int m_num;
};

void FizzBuzz::set(int num)
{
  m_num = num;
}

void FizzBuzz::check()
{
  if(m_num % 15 == 0){
    std::cout<<"FizzBuzz"<<std::endl;
  }else if(m_num % 3 == 0){
    std::cout<<"Fizz"<<std::endl;
  }else if(m_num % 5 == 0){
    std::cout<<"Buzz"<<std::endl;
  }else{
    std::cout<<"ﾉﾝﾉﾝﾉﾝ"<<std::endl;
  }
}

int a;
int main(){
  FizzBuzz obj;
  std::cin>>a;
  obj.set(a);
  obj.check();
  return 0;
}
