#include<iostream>
#include<conio.h>
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
                        temp = new_arr[j];
                        new_arr[j] = new_arr[j+1];
                        new_arr[j+1] = temp;
                    }
                }
            }
        }
        void print_arr(){
            cout<<"Bubble sort--->";
            for(int i=0;i<size;i++){
                cout<<new_arr[i]<<" ,";
            }
            cout<<endl;
        }
};
class Selection_sort:public Sorts{
    public:
        int new_arr[10];
        int sorted[10];
        void create_new_arr(){
            for(int i=0;i<size;i++){
                new_arr[i] = arr[i];
            }
        }
        void sorted_arr(){
            for(int i=0;i<size;i++){
                int min_number = new_arr[0];
                int index_of_min_number = 0;
                for(int j=0;j<size;j++){
                    if(min_number>new_arr[j]){
                        min_number = new_arr[j];
                        index_of_min_number = j;
                    }
                }
                sorted[i] = min_number;
                new_arr[index_of_min_number] = 101;
            }
        }
        void print_arr(){
            cout<<"Selection sort--->";
            for(int i=0;i<size;i++){
                cout<<sorted[i]<<" ,";
            }
            cout<<endl;
        }

};
class Insertion_sort:public Sorts{
    public:
        int new_arr[10];
        void create_new_arr(){
            for(int i=0;i<size;i++){
                new_arr[i] = arr[i];
            }
        }
        void sorted_arr(){
                for(int i=1;i<size;i++){
                    int key = new_arr[i];
                    int j = i -1;
                    while (key < new_arr[j] && j >= 0) {
                      new_arr[j + 1] = new_arr[j];
                      --j;
                    }
                    new_arr[j + 1] = key;
                }
        }
        void print_arr(){
            cout<<"Insertion sort--->";
            for(int i=0;i<size;i++){
                cout<<new_arr[i]<<" ,";
            }
            cout<<endl;
        }
};

int main(){

    // Bubble sort
    Bubble_sort Bubble;
    Bubble.new_arr_create();
    Bubble.sorted_arr();
    Bubble.print_arr();

    // Selection sort
    Selection_sort Selection;
    Selection.create_new_arr();
    Selection.sorted_arr();
    Selection.print_arr();

    // Insertion sort
    Insertion_sort Insertion;
    Insertion.create_new_arr();
    Insertion.sorted_arr();
    Insertion.print_arr();


    getch();
    return 0;
}
