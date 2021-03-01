#include <iostream>

class FB{
    public:
        void in(int num);
        void jud();
    private:
        int jnum;
};

void FB::in(int num){
  jnum = num;
}

void FB::jud(){

  std::string bz = "";
    
  if(jnum % 3 == 0) bz += "Fuzz";
  if(jnum % 5 == 0) bz += "Buzz";
  std::cout << bz << std::endl;
} 

int main(){
    FB obj;
    int num;
    std::cin >> num;
    obj.in(num);
    obj.jud();
    return 0;
}

