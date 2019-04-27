#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size,i,j,tmp, flag = 1, flag2 = 0;
    cout<<"Enter Array size : ", cin>>size;
    int arry[size];
    cout<<"Enter Array Element : ";
    for(i = 0; i < size; i++) cin>>arry[i];

    for(i = 0; i < size && flag; i++){
        for(j = 0; j < size-i-1; j++){
            if(arry[j+1] < arry[j]){
                tmp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = tmp;
                flag++, flag2 = 1;
            }
        }
        if(flag == 1) flag = 0;
        else{
            for(j = 0; j < size; j++) cout<<arry[j]<<" ";
            cout<<endl;
            flag = 1;
        }
    }
    if(flag2){
        cout<<"Sorted Array is: ";
        for(i = 0; i < size; i++) cout<<arry[i]<<" ";
        cout<<endl;
    }else cout<<"Array was sorted"<<endl;
    return 0;
}
