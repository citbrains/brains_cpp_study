#include<iostream>
#include<vector>

class sample{
  public:
    void front(){ //配列の一番目の要素を表示
       v.begin();
    }
    void back(){ //配列の最後の要素を表示する
      v.end();
    }
    void push(int last_index){//配列の最後に要素を追加する
      v.push_back(last_index);
    }
    void incread_index(){
      v.push_back(0);
    }
    
    void pop(){//配列の最初を消す。
       v.erase(v.begin());
    }
    void display();
    void empty(){
      std::cout<<v.empty()<<std::endl;
    }
    void input_index();//入力方法
      
    
  private:
    std::vector<int> v{0,0,0,0,0};
};


//配列表示
void sample::display(){
  std::cout<<"{";
  for(unsigned int i=0;i<v.size();i++){
    std::cout<<v[i]<<",";
  }
  std::cout<<"}"<<std::endl;
}
void sample::input_index(){//入力方法
  unsigned int i=0;
  int a=0;
      
  while(a!=-1){
     if(i<v.size()){
       std::cin>>a;
       v[i]  = a; 
     }else{
       pop();
       incread_index();
       std::cin>>a;
       v[4] = a;
     }
     if(a!=-1){
       display(); 
     }
     i++;
 }
}
int main(){
  sample s1;
  s1.input_index();
  s1.empty();
  return 0;
}
