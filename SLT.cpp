#include<iostream>
#include<map>
using namespace std;
int main()
{

    map<string, int> fruits;
    fruits.insert(make_pair("apple", 3));
    fruits.insert(pair<string, int>("orange", 6));
    fruits ["mango"]=10;

    fruits ["apple"]=7;

    for (auto i=fruits.begin(); i!=fruits.end(); i++)
    {
        cout<<i->first<<":"<<i->second<<endl;
    }

    auto it=fruits.find("mango");
    if(it!=fruits.end())
    {
        fruits ["mango"]=fruits ["mango"]+4;
    }

    it=fruits.find("orange");
    if(it!=fruits.end()) fruits.erase(it);

    for (auto i: fruits)
        cout<<i.first<<" "<<i.second<<endl;
}
