#include <stdio.h>

int main()
{

    int p1_run_time = 0, p1_speed = 0, p1_rest_time = 0, p2_run_time = 0, p2_speed = 0, p2_rest_time = 0, total_time = 0;

    scanf("%d %d %d %d %d %d %d", &p1_run_time, &p1_speed, &p1_rest_time, &p2_run_time, &p2_speed, &p2_rest_time, &total_time);

    int p1_loop = total_time / (p1_run_time + p1_rest_time);
    int p1_loop_distance = p1_loop * p1_run_time * p1_speed;
    int p1_loop_extra = total_time % (p1_run_time + p1_rest_time);
    int p1_extra_time = p1_loop_extra > p1_run_time ? p1_run_time : p1_loop_extra;
    int p1_loop_extra_distance = p1_extra_time * p1_speed;

    int p1_total_distance = p1_loop_distance + p1_loop_extra_distance;

    int p2_loop = total_time / (p2_run_time + p2_rest_time);
    int p2_loop_distance = p2_loop * p2_run_time * p2_speed;
    int p2_loop_extra = total_time % (p2_run_time + p2_rest_time);
    int p2_extra_time = p2_loop_extra > p2_run_time ? p2_run_time : p2_loop_extra;
    int p2_loop_extra_distance = p2_extra_time * p2_speed;

    int p2_total_distance = p2_loop_distance + p2_loop_extra_distance;

    if (p1_total_distance > p2_total_distance)
    {
        printf("Takahashi");
    }
    else if (p1_total_distance < p2_total_distance)
    {
        printf("Aoki");
    }
    else if (p1_total_distance == p2_total_distance)
    {
        printf("Draw");
    }

    return 0;
}