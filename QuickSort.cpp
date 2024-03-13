# include<iostream>
using namespace std;
int Partition(int arr[], int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);

    int i=s;
    int j=e;
    while(i<pivotIndex  && j>pivotIndex){
        while(pivot>=arr[i]){
            i++;
        }
        while(pivot<arr[j]){
            j--;
        }
        if(i<pivotIndex  && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;

}
void QuickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int p=Partition(arr,s,e);

    QuickSort(arr,s,p-1);

    QuickSort(arr,p+1,e);

}
int main(){
    int arr[10]={34,56,23,1,6,9,6,5,45,95};
    int n=10;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}