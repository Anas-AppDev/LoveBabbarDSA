#include<iostream>
using namespace std;


// void approach1 (){

//     for (int i=0; i<sizeArr1; i++){

//         for (int j=0; j<sizeArr2; j++){
//             if (arr1[i]==arr2[j]){
//                 cout<<"Comman Elem = "<<arr1[i]<<endl;
//                 break;
//             }
//         }
//     }
// }

int main(){

    int sizeArr1 = 5;
    int sizeArr2 = 7;


    int arr1[5] = {1,2,2,3,4};
    int arr2[7] = {1,2,2,3,4,4,6};

    int i = 0;
    int j = 0;

    while (i<sizeArr1 && j<sizeArr2){

        if (arr1[i]==arr2[j]){
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }


    return 0;
}