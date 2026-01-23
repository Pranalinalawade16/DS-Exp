#include <iostream>
using namespace std;
int main() {
    int a[10][10],b[10][10],c[10][10];
    int r1,r2,c1,c2,ch;
    int max,min;
    
    cout<<"Enter no of rows and columns for matrix A:";
    cin>>r1>>c1;
    
    cout<<"Enter elements of matrix A:";
    for(int i=0;i<r1;i++){
      for(int j=0;j<c1;j++){
        cin>>a[i][j];
      }
    }
    
    cout<<"Enter no of rows and columns for matrix B:";
    cin>>r2>>c2;
    
    cout<<"Enter elements of matrix B:";
    for(int i=0;i<r2;i++){
      for(int j=0;j<c2;j++){
        cin>>b[i][j];
      }
    }
  do{  
    cout<<"--Operation on Matrix--"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Transpose of matrix A"<<endl;
    cout<<"5.Maximum element of A"<<endl;
    cout<<"6.Minimum element of A"<<endl;
    cout<<"7.Exit"<<endl;
    cout<<"Enter your Choice:";
    cin>>ch;
    
    switch(ch){
        case 1://addition
         if(r1==r2 && c1==c2){
             for(int i=0;i<r1;i++){
                 for(int j=0;j<c1;j++){
                 c[i][j]=a[i][j]+b[i][j];
                 }
             }
             cout<<"Result of (A + B):"<<endl;
             for(int i=0;i<r1;i++){
                 for(int j=0;j<c1;j++){
                     cout<<c[i][j]<<" ";
                 }cout<<endl;
             }
         }else{
             cout<<"Addition not possible!!"<<endl;
         }
         break;
         
         case 2://Subration
         if(r1==r2 && c1==c2){
             for(int i=0;i<r1;i++){
                 for(int j=0;j<c1;j++){
                 c[i][j]=a[i][j]-b[i][j];
                 }
             }
             cout<<"Result of (A - B):"<<endl;
             for(int i=0;i<r1;i++){
                 for(int j=0;j<c1;j++){
                     cout<<c[i][j]<<" ";
                 }cout<<endl;
             }
         }else{
             cout<<"Subtraction not possible!!"<<endl;
         }
         break;
         
         case 3://multiplication
         if(c1==r2){
             for(int i=0;i<r1;i++){
                 for(int j=0;j<c2;j++){
                     c[i][j]=0;
                     for(int k=0;k<c1;k++){
                         c[i][j]+=a[i][k]*b[k][j];
                     }
                 }
             }
             cout<<"Result(A*B):"<<endl;
             for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                     cout<<c[i][j]<<" ";
                 }cout<<endl;
             }
         }else{
             cout<<"Multiplication not possible!!"<<endl;
         }
         break;
         
         case 4://Transpose
         cout<<"Transpose of matrix A:"<<endl;
         for(int i=0;i<c1;i++){
             for(int j=0;j<r1;j++){
                 cout<<a[j][i]<<" ";
             }cout<<endl;
         }
         break;
         
         case 5://maximum
         max=a[0][0];
         for(int i=0;i<r1;i++){
             for(int j=0;j<c1;j++){
                 if(max<a[i][j]){
                     max=a[i][j];
                 }
             }
         }
            cout<<"Maximum element:"<<max<<endl;
         break;
         
         case 6://minimum
         min=a[0][0];
         for(int i=0;i<r1;i++){
             for(int j=0;j<c1;j++){
                 if(min>a[i][j]){
                     min=a[i][j];
                 }
             }
         }
         cout<<"Minimum element:"<<min<<endl;
         break;
         
         case 7://exit
         cout<<"Exiting program.."<<endl;
         break;
         
         default:
         cout<<"Invalid choice!!"<<endl;
    }
  }while(ch!=7);
    return 0;
}
