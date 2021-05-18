#include <iostream>

class FizzBuzz
{
public:
    void set(int num);
    void fizz();
    void buzz();
    void fizzbuzz();
    void error();
    int anser();
private:
int num_process;
};
void FizzBuzz::set(int num)
{
num_process = num;
}
int FizzBuzz::anser()
{
 if (num_process % 3 == 0 && num_process % 5 == 0)
 {
     fizzbuzz();

 }else if(num_process % 3 == 0)
 {
     fizz();
 }else if(num_process % 5 == 0)
 {
     buzz();
 }else
 {
     error();
 }
}
void FizzBuzz::fizz()
{
  std::cout << "Fizz" << std::endl;
}
void FizzBuzz::buzz()
{
  std::cout <<"Buzz"<< std::endl;
}
void FizzBuzz::fizzbuzz()
{
  std::cout <<"FizzBuzz"<< std::endl;
}
void FizzBuzz::error()
{
  std::cout <<"not in multiples of 3 and 5"<< std::endl;
}
int main()
{
    int num_in;
    FizzBuzz obj;
    std::cin >> num_in ;
    obj.set(num_in);
    obj.anser();
    return 0;
}