#include <iostream>
#include<cmath>
#include <vector>
using namespace std;
class Circulo 
{
float radio;

public: 
int x,y;
Circulo();
Circulo(int x2, int y2);
Circulo(int x2, int y2,float r);
float getRadio();
void setRadio(float r);
float getArea();
void interesects(Circulo circulo);
};

Circulo::Circulo()
{
radio=0.0;
x=0;
y=0;
}
Circulo::Circulo(int x2, int y2)
{
radio=0.0;
x=x2;
y=y2;
}
Circulo::Circulo(int x2, int y2,float r)
{
x=x2;
y=y2;
if(r>-1)
{
    radio=r;
}
else
{
radio=0.0;
}
}
float Circulo::getRadio()
{
    return radio;
}
void Circulo::setRadio(float r)
{
if(r>-1)
{
radio=r;
}else
{
    radio=0.0;
}
}
float Circulo::getArea()
{
    return radio*radio*3.14;
    
}
void Circulo::interesects(Circulo circulo)
{
    float xc=(x-circulo.x)*(x-circulo.x);
    float yc=(y-circulo.y)*(y-circulo.y);
    float dist=sqrt(xc+yc);
    float rads=radio+circulo.radio;
    if(dist<rads)
    {
        cout<<"Circulos intersectan"<<endl;
    }else
    {
        cout<<"No intersectan"<<endl;
    }
}

int main()
{
Circulo c1;
c1.setRadio(3);
c1.x=1;
c1.y=1;
Circulo c2(2,2);
c2.setRadio(5);
Circulo c3(3,3,4);
vector<Circulo>area={c1,c2,c3};
for(int i=0; i<area.size(); i++)
{
cout<<area[i].getArea()<<endl;
}
c1.interesects(c2);
c1.interesects(c3);
c2.interesects(c1);
    return 0;
}