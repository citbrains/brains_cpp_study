#include <iostream>

class fizzbuzz{
public:
    void set(int num);
    void judge();
private:
    int m_num;
};

void fizzbuzz::set(int num){
    m_num = num;
}
 
void fizzbuzz::judge(){
  if(m_num % 3 == 0 && m_num % 5 == 0)
    std::cout << "FizzBuzz" << std::endl;
  else if(m_num % 3 == 0)
    std::cout << "Fizz" << std::endl;
  else if(m_num % 5 == 0)
    std::cout << "Buzz" << std::endl;
  else
    std::cout << "not" << std::endl;
}

int main(){
  fizzbuzz obj;
  int in_num;

  std::cin >> in_num;
  obj.set(in_num);
  obj.judge();

  return 0;
}
