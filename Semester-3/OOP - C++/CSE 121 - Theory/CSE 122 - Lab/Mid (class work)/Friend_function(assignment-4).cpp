#include<iostream>
using namespace std;

class coconut_tree; //a forward declaration.

class palm_tree
{
    int height;
    int width;
public:
    palm_tree (int h,int d)//height=h;width=d;
    {
        height=h;
        width=d;
    }
    friend int taller(palm_tree p,coconut_tree c);
    void display();


};
class coconut_tree
{
int height;
int width;
public:
coconut_tree(int h,int d)//height=h,width=d;
{
    height=h;
    width=d;
}
friend int taller(palm_tree p,coconut_tree c);

};

/*1)Return positive if palm tree is taller then truck.
  2)Return zero if height are the same.
  3)Return negative if coconut tree height faster then palm tree.*/

int taller(palm_tree p,coconut_tree c)
{
    return  p.height-c.height;

}
/*void plam_tree::display()
{
     cout << "Enter height"<< endl;
     cin >> height;
     cout <<"Enter width"<< endl;}
     cin >> width;
     */

int main()
{
int t;
palm_tree p1(25,10),p2(10,5);
coconut_tree c1(18,7),c2(10,6);
cout<<"Comparing p1 and c1:\n";
t= taller(p1,c1);
if(t<0)
cout<<"coconut_tree is taller.\n";
else if(t==0)
cout<<"palm_tree and coconut_tree are in the same height.\n";
else
cout<<"palm_tree is taller.\n";

cout<<"\nComparing p2 and c2:\n";
t=taller(p2,c2);
if(t<0)
cout<<"coconut_tree is taller.\n";
else if(t==0)
cout<<"palm_tree and coconut_tree are in the same height.\n";
else
cout<<"palm_tree is taller.\n";
return 0;

}


