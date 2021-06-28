#include "Rotate.h"

template<typename T>
void transponse(std::vector<std::vector<T>>& arr){

    for(auto i = 0; i < arr.size(); i++)
        for(auto j = i; j < arr[i].size(); j++){
            const int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }

}

template<typename T>
void reverse(std::vector<std::vector<T>>& arr){

    for(auto i = 0; i < arr.size(); i++)
        for(auto j = 0; j < arr[i].size()/2; j++){
            const int temp = arr[i][j];
            arr[i][j] = arr[i][arr[i].size()-1-j];
            arr[i][arr[i].size()-1-j] = temp;
        }

}

template<typename T>
void clc::rotateLeft(std::vector<std::vector<T>>& arr){

    reverse(arr); 
    transpone(arr);

}

template<typename T>
void clc::rotateLeft(std::vector<std::vector<T>>& arr, int times){

    while(times>1){

        transponse(arr);
        times-=2;

    }

    if(times==1){

        reverse(arr);
        transponse(arr);

    }

  
}

template<typename T>
void clc::rotateRight(std::vector<std::vector<T>>& arr){

    transponse(arr);
    reverse(arr);
    
}

template<typename T>
void clc::rotateRight(std::vector<std::vector<T>>& arr, int times){

    while(times>1){

        transponse(arr);
        times-=2;

    }

    if(times==1){

        transponse(arr);
        reverse(arr);

    }
 
}

template<typename T>
void clc::writeArray(std::vector<std::vector<T>>& arr){

    for(auto n : arr){
        for(auto m : n)
            std::cout<<m<<" ";
        std::cout<<"\n";
    }

}