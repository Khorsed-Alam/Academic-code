#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>vec; //initialize Vector
     vec.push_back(25);//push value 
     vec.push_back(35);//push value
     vec.push_back(45);//push value
     vec.push_back(55);//push value

     for(int i: vec){
        cout<<i<<" ";
     }

     cout<<"\n\nFront element of Vector: "<<vec.front();
     cout<<"\n\nBack element of Vector: "<<vec.back()<<endl;
     cout<<"\n\nValue at specific position "<<vec.at(2)<<endl;
     cout<<endl;

     vec.pop_back();
     vec.pop_back();
     vec.pop_back();
     vec.push_back(30);
     vec.push_back(40);

     cout<<"Vector size: "<<vec.size()<<endl;
     cout<<"Vector capacity: "<<vec.capacity()<<endl;

     for(int j:vec){
        cout<<j<<" ";
     }


     cout<<"\n \n size: "<<vec.size()<<endl;

    vector<int>vec1={1,2,3};//initialize+insert value
    cout<<endl<<vec1[0]<<endl;

    vector<int>vec2(10,0);
    for(int i:vec2){//for each loop;
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"\nSize : "<<vec1.size()<<endl;// chech vector value
    cout<<endl;

    vector<char> vec3={'q','r','s','t','u','v'};

    for(char val:vec3){
        cout<<val<<" ";
    }
 
    return 0;
}