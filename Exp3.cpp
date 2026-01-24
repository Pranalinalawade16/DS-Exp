
#include <iostream>
using namespace std;
int main() {
   int n,key,ch,pos;
   int beg,end,mid;
   int temp;
   
   cout<<"Enter size of array:";
   cin>>n;
   int a[n];
   cout<<"Enter elements of array:";
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   
   cout<<"Select the Seraching or Sorting Technique:"<<endl;
   cout<<"1.Liner Search"<<endl;
   cout<<"2.Binary Search(for sorted array)"<<endl;
   cout<<"3.Bubble Sort"<<endl;
   cout<<"4.Inserction Sort"<<endl;
   cout<<"5.Exit"<<endl;
   cout<<"Enter your choice:";
   cin>>ch;
   
   switch(ch){
       case 1://linear Search
       cout<<"Enter number to search:";
       cin>>key;
        pos=-1;
        for(int i=0;i<n;i++){
            if(a[i]==key){
                pos=i;
            }
        }
        
        if(pos!=-1){
            cout<<"Number is found at "<<pos+1<<" Position"<<endl;
        }else{
            cout<<"Not found!"<<endl;
        }
        break;
        
        case 2://binary search
        cout<<"Enter number to search:";
        cin>>key;
        beg=0;
        end=n-1;
        pos=-1;
        while(beg<=end){
            mid=(beg+end)/2;
            if(a[mid]==key){
                pos=mid;
                break;
            }else if(a[mid]>key){
                end=mid-1; 
            }else{ 
                beg=mid+1;
            }
        }
        if(pos!=-1){
            cout<<"Number is found at "<<pos+1<<" position"<<endl;
        }else{
            cout<<"Not found!!"<<endl;
        }
        break;
        
        case 3://bubble sort
        for(int i=0;i<n;i++){ //this loop for number of passes
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        cout<<"Sorted Array:"<<endl;
        for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
        }   
        break;
        
        case 4://inserction sort
         for(int i=0;i<n;i++){
             key=a[i];
             int j=i-1;
             
             while(j>=0 && a[j]>key){
                 a[j+1]=a[j];
                 j--;
             }
             a[j+1]=key;
         }
         cout<<"Sorted array:"<<endl;
         for(int i=0;i<n;i++){
             cout<<a[i]<<" ";
         }
        break;
        
        case 5:
         cout<<"Exiting Program."<<endl;
        break;
        
        default:
        cout<<"Invalid Choice!!!"<<endl;
   }

    return 0;
}
