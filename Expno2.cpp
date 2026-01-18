#include <iostream>
using namespace std;

int main() {
  int x,ch;
  int sum,max,min;
  int a[2][2];
      cout<<"--Matrix operation--"<<endl;
      cout<<"1.Create Array"<<endl;
      cout<<"2.Display Array"<<endl;
      cout<<"3.Sum "<<endl;
      cout<<"4.Maximum "<<endl;
      cout<<"5.Minimum "<<endl;
      cout<<"6.Exit"<<endl;
      
  do{
      cout<<" "<<endl;
      cout<<"Enter choice:";
      cin>>ch;

      switch(ch){
          case 1:
           cout<<"Enter elements of array:";
           for(int i=0;i<2;i++){
               for(int j=0;j<2;j++){
                   cin>>a[i][j];
               }
           }
           break;
           case 2:
           for(int i=0;i<2;i++){
               for(int j=0;j<2;j++){
                   cout<<a[i][j]<<" ";
               }cout<<endl;
           } 
           break;
           case 3:
           sum=0;
           for(int i=0;i<2;i++){
               for(int j=0;j<2;j++){
                   sum+=a[i][j];
               }
           } 
           cout<<"Sum:"<<sum<<endl;
           break;
           case 4:
           max=a[0][0];
           for(int i=0;i<2;i++){
               for(int j=0;j<2;j++){
                   if(a[i][j]>max){
                       max=a[i][j];
                   }
               }
           }
           cout<<"Maximun element:"<<max<<endl;
           break;
           case 5:
           min=a[0][0];
            for(int i=0;i<2;i++){
               for(int j=0;j<2;j++){
                   if(a[i][j]<min){
                       min=a[i][j];
                   }
               }
           }cout<<"Minimun element:"<<min<<endl;
           break;
           case 6:
           cout<<"Exiting Program..."<<endl;
           break;
           default:
           cout<<"Invalid choice!!"<<endl;
      }
  }
  while(ch!=6);
  return 0;
}
