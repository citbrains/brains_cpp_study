#include<iostream>
#include<vector>
using namespace std;

class sample{
    private:
        vector<int> vec1;
        vector<int> vec2;
        vector<int> vec_sum;


    public:
        sample(){
            for(int i=1; i<4; i++){
                vec1.push_back(i);
            }
            for(int i=4; i<7; i++){
                vec2.push_back(i);
            }
            for(int i=0; i<3; i++){
                vec_sum.push_back(0);
            }
        }
        void ans_of_CrossProduct(){
            int a=1,b=0;
            for(int i=0; i<3; i++){
                vec_sum[i] = vec1[i+a]*vec2[2-b-i] -vec1[2-b-i]*vec2[i+a];
                if(i==0)
                    b=1;
                if(i==1){
                    a=-2;
                    b=-1;
                }
            }
        }

        void ans_show(){
            for(int i=0; i<3; i++)
                cout << vec_sum[i] << endl;
        }

};

int main(){
    sample obj;
    obj.ans_of_CrossProduct();
    obj.ans_show();
    return 0;
}
