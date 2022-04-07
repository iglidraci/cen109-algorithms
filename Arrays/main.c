#include <stdio.h>
#include "array_funcs.h"

#define SIZE 20
#define STUDENTS 2
#define EXAMS 2

int main() {
    int arr[] = {1, 2, 3, 4};
    int length = sizeof(arr)/ sizeof(int);
    print_array(arr, length);
    int sum = sum_array(arr, length);
    printf("sum of all elements is: %d\n", sum);
    int* random_arr = get_random_array(SIZE, 10);
    print_array(random_arr, SIZE);
    print_frequencies(random_arr, SIZE, 10);
    int sorted_arr[10] = {0, 1, 4, 5, 5, 6, 9, 10, 10, 20};
    int key = 20;
    bool is_in = contains(sorted_arr, 10, key);
    if (is_in) printf("value %d was found in the array\n", key);
    else printf("value %d was not found in the array\n", key);
    int exam_points[STUDENTS][EXAMS];
    int points;
    for (int i = 0; i < STUDENTS; ++i) {
        printf("You are submitting the exam points for student nr %d:\n", i+1);
        for (int j = 0; j < EXAMS; ++j) {
            printf("Exam nr %d -> ", j+1);
            scanf("%d", &points);
            exam_points[i][j] = points;
        }
    }
    for (int i = 0; i < STUDENTS; ++i) {
        for (int j = 0; j < EXAMS; ++j) {
            printf("%d ", exam_points[i][j]);
        }
        printf("\n");
    }
    float class_avg = 0.f;
    for (int i = 0; i < STUDENTS; ++i) {
        float avg = sum_array(exam_points[i], EXAMS)*1.f/ EXAMS;
        printf("Student %d average: %.2f\n", i+1, avg);
        class_avg += avg;
    }
    class_avg /= STUDENTS;
    printf("Class average: %.2f\n", class_avg);
    return 0;
}
