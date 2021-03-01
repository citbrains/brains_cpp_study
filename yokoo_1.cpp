#include <iostream>
#include <string>

class FizzBuzz
{
public:
  void Set(int num);
  void Branch();
  void Fizz();
  void Buzz();
  void FBzz();
private:
  int set_num;
  std::string fizz = "fizz";
  std::string buzz = "buzz";
};
void FizzBuzz::Set(int num)
{
  set_num = num;
  //Branch();
}
void FizzBuzz::Branch()
{
  if(set_num % 3 == 0 && set_num % 5 == 0){
    FBzz();
  }else if(set_num % 3 == 0){
    Fizz();
  }else if(set_num % 5 == 0){
    Buzz();
  }else{
  }
}
void FizzBuzz::FBzz()
{
  std::cout << fizz+buzz << std::endl;
}

void FizzBuzz::Fizz()
{
  std::cout << fizz << std::endl;
}

void FizzBuzz::Buzz()
{
  std::cout << buzz << std::endl;
}


int main(){
  int set_num;
  FizzBuzz fbzz;

  std::cin >> set_num;

  fbzz.Set(set_num);
  fbzz.Branch();

  return 0;
}
