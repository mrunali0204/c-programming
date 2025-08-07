//take 10 students marks of 5 subj and find average and tell which student has hisghest marks from average

#include<stdio.h>
int main(){
    int marks;
    int highest_avg =0;
    int top_student =0;
    int total=0;
    
    for(int i=0; i<10; i++){
        printf("enter the 5 subjects marks: %d", i+1);

        for(int j=0; j<5; j++){
            printf("subjects : %d", j+1);
            scanf("%d", &marks);
            total = total + marks;

        }
        
        int avg = total/5;
        printf("avg of students %d = %d\n", i+1, avg);
        if(avg > highest_avg){
            highest_avg = avg;
            top_student = i+1;
        }

    }
    printf("\n student %d has highest marks = %d\n", top_student, highest_avg);
    return 0;
    
}
