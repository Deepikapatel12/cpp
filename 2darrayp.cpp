#include<iostream>
using namespace std;
int main()
{

    //syntax-: datatype array[row(size][column(size)];
  int a[2][4]={1,2,3,4,5,6,7,8};
  for(int r=0;r<2;r++)
  {
  for(int c=0;c<4;c++)
  {
  cout<<a[r][c]<<"\t";
  }
  cout<<"\n";
  }

}
