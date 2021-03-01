#include <iostream>
#include <vector>

using namespace std;

class Queue{
  public:
    int front();
    int back();
    void push(int set_number);
    void pop();
    void empty();
    void all();
  private:
    vector<int> num;
};

int Queue::front()
{
  return num.at(0);
}

int Queue::back()
{
  return num.at(num.size()-1);
}

void Queue::push(int set_number)
{
  num.push_back(set_number);
}

void Queue::pop()
{
  num.erase(num.begin());
}

void Queue::empty()
{
  cout << num.size() << endl;
}
void Queue::all()
{
  for(int i=0;i<num.size();i++){
    cout << num.at(i) << " ";
  }
  cout << endl;
}

int main(){
  Queue queue;
  for(int i=0;i<10;i++){
    queue.push(i*3);
  }
  queue.all();
  for(int i=0;i<10;i++){
    queue.pop();
  }
  queue.empty();

  return 0;
}


