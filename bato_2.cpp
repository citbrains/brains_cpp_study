#include<iostream>

class Csample{
  public:
  Csample(){                   //配列の初期化
    for(int i=0;i<1000;i++){  
      stack[i]=-1;
    }
  }
  void input_elements(int push_index); //配列要素の追加の定義
  int application_array(int display_index); //配列の一般化の定義
  int get_index(); //要素数表示の定義
  int back_vale(); //値を戻すの定義
  void display();//表示の定義
  
  private:
    int stack[1000];
    int end_index=0;
};

/*配列要素の追加*/
void Csample::input_elements(int push_index){
  stack[end_index]=push_index; //外側の値入力 
  end_index++;      
}

/*配列の一般化*/
int Csample::application_array(int display_index){
    return stack[display_index];
}
/*要素数の一般化*/
int Csample::get_index(){
  return end_index;
}

/*値を戻す*/
int Csample::back_vale(){
  int re=0;                 //初期化
   re=stack[end_index - 1]; //こぴー（値を＋してるので-1）
   stack[end_index -1]=-1;  //要素の初期化
  end_index--;//要素数を減らす
  return re;
}
void Csample::display(){
  for(int i=0;i<end_index;i++){
    std::cout<<stack[i]<<",";
  }
  std::cout<<std::endl;
}
int main(){
  Csample cs1;
  int num;
  char juging; 
  std::cin>>juging;    //  操作の入力     
  while(juging!='q'){
    switch(juging){
      case 'i':       //inputであれば
        std::cin>>num; //数字入力
        cs1.input_elements(num);//numの値を要素に加える
        cs1.display();//表示
        break;
      case 'o':       //outputであれば
        std::cout<<"return:"<<cs1.back_vale()<<std::endl;
        cs1.display();//表示
        break;
      
      default:     //どちらでもない
        std::cout<<"error"<<std::endl;
    }
  std::cin>>juging;  //操作の入力
  }
  return 0;
}

