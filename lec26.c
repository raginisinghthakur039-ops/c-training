// #include <stdio.h>
// int main(){
//     int leftMax[12];
//     int height[12]={0,1,0,2,1,0,1,3,2,1,2};
//     int rightMax[12];
//     int water=0;
//     leftMax[0]=height[0];
//     for(int i=1;i<12;i++){
//         if(height[i]>leftMax[i-1]){
//             leftMax[i]=height[i];

//         }else{
//             leftMax[i]=leftMax[i-1];

//         }
//     }

// }


#include <stdio.h>
struct Student
{
    char name[10];
    int rollno;
    float marks;
};
int main(){
    struct Student s1[5];
    for(int i=0;i<5;i++){
        printf("enter name");
        scanf("%s",s1[i].name);
        printf("enter rollno");
        scanf("%d",s1[i].rollno);
        printf("enter marks");
        scanf("%f",s1[i].marks);
        
    }
}
