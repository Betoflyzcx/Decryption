#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;
#include <stdio.h>
#define ask std::cout<<"Enter your: \t"
#define s 57
#define skipline std::cout<<std::endl;

// f declarations
mp::cpp_int pow(int x,int y);

int main()
{
   /* mp::cpp_int u = 1;
    for(unsigned i = 1; i <= 1000; ++i)
            u *= i;

    std::cout << "1000! = " << u << '\n';*/
    
        mp::cpp_int Decrypt[s] = {10, 7, 58, 30, 23, 62,
        7, 64, 62, 23, 62, 61,
        7, 41, 62, 21, 7, 49,
        75, 7, 69, 53, 58, 37,
        37, 41, 10, 64, 50, 7,
        10, 64, 21, 62, 61, 35,
        62, 61, 62, 7, 52, 10,
        21, 58, 7, 49, 75, 7,
        62, 26, 22, 53, 30, 21};
    
        int d,c,n;
        mp::cpp_int m[s];
        /*ask;
        std::cout<< "d-value\n";
        scanf("%d", &d);
        ask;
        std::cout<<"n-value \n";
        scanf("%d", &n);*/
        d=37;
        n=77;
        
        skipline;
        for(int i =0; i<s ;i++)
         {
                m[i]= pow(Decrypt[i],d)%n;

                std::cout << " " << m[i];
                if(i%4==0&& i!=0) skipline;
        }
        skipline
        skipLine
        for(i=0;i)
    return 0;
}


mp::cpp_int pow(int x,int y)
{
        mp::cpp_int ans=1;
        for(int i=0; i<y; i++)
        {
                ans=ans*x;
        }
        return ans;
}
