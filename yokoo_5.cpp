#include <iostream>
#include <vector>

using namespace std;

class Cross_product{
public:
  Cross_product();
  Cross_product(int);
  void ans_of_Cross_product();
  void output_anser();
  void output_xy();
private:
  vector<int> x_component_of_vector;
  vector<int> y_component_of_vector;
  vector<int> anser_cross_product;
};
Cross_product::Cross_product(){
  for(int i=0, j=5;i<3;i++, j+=2){
    int k=i+j;
    x_component_of_vector.push_back((j+i)*(3+k));
    y_component_of_vector.push_back((j+k)*(3+i));
  }
}
Cross_product::Cross_product(int num){
  for(int i=0, k=4;i<3;i++,k*=3){
    x_component_of_vector.push_back((num)-(3+k));
    y_component_of_vector.push_back((num)-(3+i));
  }
}
void Cross_product::output_xy(){
  cout << "x={";
  for(int i=0;i<3;i++){
    cout << x_component_of_vector.at(i);
    cout << " ";
  }
  cout << "}" << endl;
  cout << "y={";
  for(int i=0;i<3;i++){
    cout << y_component_of_vector.at(i);
    cout << " ";
  }
  cout << "}" << endl;
}
void Cross_product::ans_of_Cross_product(){
  for(int i=0, j=1,k=2;i<3;i++,k++,j++){
    anser_cross_product.push_back((x_component_of_vector.at(j)*y_component_of_vector.at(k))-(x_component_of_vector.at(k)*y_component_of_vector.at(j)));
    if(i==0)
      k=-1;
    if(i==1)
      j=-1;
  }
}
void Cross_product::output_anser(){
  for(int i=0;i<3;i++){
    cout << anser_cross_product.at(i);
    cout << " ";
  }
  cout << endl;
}

int main(){
  Cross_product cross;
  cross.output_xy();
  cross.ans_of_Cross_product();
  cross.output_anser();
  cout << endl;
  Cross_product cross2(21);
  cross2.output_xy();
  cross2.ans_of_Cross_product();
  cross2.output_anser();
  return 0;
}
