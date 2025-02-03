#include<iostream>
using namespace std;

class vector{
public:
    int size;
    int capacity;
    int* arr;

    vector(){
        // default constructor
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int val){
        if(size == capacity){
            capacity *= 2;                      // doubled the capacity
            int* newArr = new int[capacity];    // new size of array with double capacity
            for(int i=0; i<size; i++){
                newArr[i] = arr[i];
            }
            arr = newArr;                       // now we can use arr and newArr same
        } else{
            arr[size] = val;                    // adding the value
            size++;                             // increase the size
        }
    }

    void remove(){
        if(size == 0){
            cout<<"Array is empty!!";
        } else{
            size--;
        }
    }

    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void index(int val){
        if(size == 0){
            cout<<"Array is empty!!";
        } else if (val>=size){
            cout<<"Invalid Index!!";
        } else{
            cout<<"Index: "<<arr[val];
        }
        
    }
};

int main(){
    vector v;
    cout<<v.size<<" "<<v.capacity<<endl;    // s: 0 c: 1
    v.add(10);
    v.display();    // 10
    cout<<v.size<<" "<<v.capacity<<endl;    // s: 1 c: 1
    v.add(20);
    v.display();    // 10 20
    cout<<v.size<<" "<<v.capacity<<endl;    // s: 2 c: 2
    v.add(30);
    v.display();    // 10 20 30
    cout<<v.size<<" "<<v.capacity<<endl;    // s: 3 c: 4
    v.add(40);
    v.display();    // 10 20 30 40
    cout<<v.size<<" "<<v.capacity<<endl;    // s: 4 c: 4
    v.add(50);
    v.display();    // 10 20 30 40 50
    cout<<v.size<<" "<<v.capacity<<endl;    // s: 5 c: 8

    v.index(2);
    return 0;
}