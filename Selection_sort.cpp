#include <iostream>
using namespace std;
int main(){
    int N = 8,i,j;
    int arr[8] = {50,30,60,10,20,80,70,40};
    int sorted[8];
    for(j=0; j<N; j++)
    {
        int min = arr[0];
        int min_index = 0;
        cout<<endl;
        for(i=0; i<N; i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
                min_index = i;
            };
        };
        sorted[j] = min;
        arr[min_index] = 999;
        cout<<endl;
    };
    for(i=0; i<N; i++)
    {
        cout<<sorted[i]<<"\t";
    };

    return 0;
}
