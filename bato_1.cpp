#include<iostream>
#include<string>

using namespace std;

class CSample{
  public:
    void set(int num);
    int get();
    std::string juging();
  private:
    int m_num;
    std::string jput;
};

void CSample::set(int num){
   m_num = num;
   //std::cout <<num<< std::endl; 
}

int CSample::get(){
  return m_num;
}

std::string CSample::juging(){
  std::string juge;
  //std::cout <<"test:"<<get()<< std::endl; 
  if(get()%15==0){
      juge = "FizzBuzz";
  }else if(get()%3==0){
      juge = "Fizz";
  }else if(get()%5==0){
      juge = "Buzz";
  }else{
      juge = "not";
  }
  return juge;
}

int main(){
  CSample obj;
  int a;
  while(1){
    std::cin >> a;
    obj.set(a);
    std::cout << "input:"<<obj.get()<< std::endl;
    std::cout <<obj.juging()<< std::endl; 
  }
  return 0;
  
}


