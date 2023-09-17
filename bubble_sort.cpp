#include<iostream>
using namespace std;

class Sorts{
    public:
        int arr[10] = {50,30,60,90,10,20,80,70,40,100};
        int size = sizeof(arr)/sizeof(arr[0]);

};
class Bubble_sort:public Sorts{
    public:
        int temp;
        int new_arr[10];
        void new_arr_create(){
            for(int i=0;i<size;i++){
                new_arr[i]= arr[i];
            }
        }
        void sorted_arr(){
            for(int i=0;i<size;i++){
                for(int j=0;j<(size-i)-1;j++){
                    if(new_arr[j]>new_arr[j+1]){
                        temp = new_arr[i];
                        new_arr[j] = new_arr[j+1];
                        new_arr[j+1] = temp;
                    }
                }
            }
        }
        void print_arr(){
            for(int i=0;i<size;i++){
                cout<<new_arr[i]<<"\t";
            }
        }
};

int main(){

    Bubble_sort My_sort;
    My_sort.new_arr_create();
    My_sort.sorted_arr();
    My_sort.print_arr();


    return 0;
}
