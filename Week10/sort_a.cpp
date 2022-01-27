// {1, 10, 3, 20, -1, 0, -2, 20, 100, 2}


 #include <iostream>
using namespace std;
int main()
{
    const int N=10;
    int  max;
    int array[N] = {1, 10, 3, 20, -1, 0, -2, 20, 100, 2};
    
    for(int i=0;i<N;i++){
    for(int q=0;q<N;q++){
        if(array[i]>array[q]){
        max=array[i];
        array[i]=array[q];
        array[q]=max;
        }
    }
    }
    for(int m=0;m<N;m++){
    cout<<" "<<array[m];
    }
    return 0;
}