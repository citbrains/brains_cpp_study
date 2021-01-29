#include <iostream>

class FB
{
  public:
    void put(int num);
  
  private:
    int put_num;
};

void FB::put(int num)
{
  put_num = num;
}

int main()
{
  int num;
  FB fbzz;
  
  std :: cin >> num;
  
  fbzz.put(num);
  
  if(num % 3 == 0 && num % 5 == 0)
    std :: cout << "FizzBuzz" << std :: endl;
  else if(num % 3 == 0)
    std :: cout << "Fizz" << std :: endl;
  else if(num % 5 == 0)
    std :: cout << "Buzz" << std :: endl;
  else;
  
  return 0;
}