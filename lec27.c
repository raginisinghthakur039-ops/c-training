       //LEAD CODE PROBLEMS
  //trapping rain water
// #include <stdio.h>
// int main(){
//     int leftMax[6];
//     int height[6]={5,6,0,3,5,2};
//     int rightMax[6];
//     int water=0;
//     leftMax[0]=height[0];
//     for(int i=1;i<6;i++){
//         if(height[i]>leftMax[i-1]){
//             leftMax[i]=height[i];
//         }else{
//             leftMax[i]=leftMax[i-1];
//         }
//     }
//     rightMax[5]=height[5];
//     for(int i=4;i>=0;i--){
//         if(height[i]>rightMax[i+1]){
//             rightMax[i]=height[i];
//         }else{
//             rightMax[i]=rightMax[i+1];
//         }
//     }
//     for(int i=0;i<6;i++){
//         int minHeight;
//         if(leftMax[i]<rightMax[i]){
//             minHeight=leftMax[i];
//         }else
//         {
//             minHeight=rightMax[i];
//         }
//         water=water+(minHeight-height[i]);
//     }
//     printf("%d",water);

// }
//output:7





  // sifting all zeros to end of array
// #include <stdio.h>
// int main(){
//     int arr[6]={5,4,0,2,0,12};
//     int j=0;
//     for(int i=0;i<6;i++){

//         if(arr[i]!=0){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             j++;
//         }
//     }
//     for(int i=0;i<6;i++){
//         printf("%d\n",arr[i]);
//     }
// }



//best time to buy and sell stock
#include <stdio.h>
int main(){
    int arr[6]={7,1,5,3,6,4};
    int min=arr[0];
    int maxProfit=0;
    for(int i=0;i<6;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]-min>maxProfit){
            maxProfit=arr[i]-min;
        }

    }
    printf("%d",maxProfit);


}