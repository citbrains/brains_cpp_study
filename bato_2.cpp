#include<iostream>

class Csample{
  public:
  Csample(){                   //iniitialization 
    for(int i=0;i<1000;i++){  
      stack[i]=-1;
    }
  }
  void push(int x); //enter
  int get(int cat); //arrey's public             //一つのクラスに存在するgetメソッドが一つの場合を除き、単純にgetという名前の関数を作るのはやめましょう。
  int eget(); //element's public                 //名前を付ける際に省略する事は基本的に推奨されません。eだけではそれが何を指すのか特定できません。   
  int pop(); //back
  
  private:
    int stack[1000];
    int end_index=0;
};

/*enter*/
void Csample::push(int x){
  stack[end_index]=x; //sub + element plus 
  end_index++;      
}

/*arrey's public*/
int Csample::get(int cat){
    return stack[cat];
}
/*element's public*/
int Csample::eget(){                            //ここで指すelementとは何のことですか？要素数を取得する関数であるとしたら適切な名前ではないと思います。
  return end_index;
}

/*back*/
int Csample::pop(){
  int re=0;                 //return arrey;
   re=stack[end_index - 1]; //plus-1 is display
   stack[end_index -1]=-1;
  end_index--;
  return re;
}
int main(){
  Csample cs1;
  int a;
  char q; //div
  std::cin>>q;    //div sub         
  while(q!='q'){
    switch(q){
      case 'i':       //input
        std::cin>>a; //num sub
        cs1.push(a);
        for(int i=0;i<cs1.eget();i++){
          std::cout<<cs1.get(i)<<",";
        }
        std::cout<<std::endl;
        break;
      case 'o':       //return outpot
        std::cout<<"return:"<<cs1.pop()<<std::endl;
        for(int i=0;i<cs1.eget();i++){
          std::cout<<cs1.get(i)<<",";
        }
        std::cout<<std::endl;
        break;
      
      default:     //i or o other
        std::cout<<"error"<<std::endl;
    }
  std::cin>>q;  //div sub
  }
  return 0;
}

