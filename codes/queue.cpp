#include <iostream>

using namespace std;
#define n 20

class queue{
    int *arr;
    int f;
    int b;
    public:
    queue(){
        arr=new int[n];
        f=-1;
        b=-1;
    }
    void push(int x){
       if(b==n-1)
       {
           cout<<"overflow"<<endl;
           return;
       }
       b++;
       arr[b]=x;
       if(f==-1){
           f++;
       }
    }
    void pop(){
        if(f==-1||f>b)
        {
            cout<<"no elements"<<endl;
            return ;
        }
        f++;
        
  }
  int peek()
  {
      if (f == -1 || f > b)
      {
          cout << "no elements" << endl;
          return -1;
      }
    
      return arr[f];
  }
  bool empty(){
      if (f == -1 || f > b)
      {
         
          return true;
      }
      return false;
  }
};


int main(){
 queue q;
 q.push(1);
 q.push(2);
 q.push(3);
 q.push(4);
 
 cout<<q.peek()<<endl;
 q.pop();

 cout << q.peek() << endl;
 q.pop();

 cout << q.peek() << endl;
 q.pop();
 cout << q.peek() << endl;
 q.pop();

 cout<<q.empty()<<endl;
 return 0;
}