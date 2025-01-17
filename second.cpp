#include<iostream>

void checknew()
{
    try{
    int * ptr = new int [1000000000000];
        //int * ptr = new (std::nothrow) int [1000000000000];
    //ptr[0]=9;
    //std::cout<<ptr[0];
     if(ptr!=nullptr)
     {ptr[0]=9;}
     else
     {std::cout<<"memory not assign";}

     std::cout<<ptr[0];
    }
    catch(std::exception & e)
    {std::cout<<"show error:"<<e.what() ;}
}

