/*
Ray casting 2D grid map
*/

#ifndef OBSTACLE_DETECTOR_H
#define OBSTACLE_DETECTOR_H

#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/Pose.h>
#include <nav_msgs/OccupancyGrid.h>

class ObstacleDetector
{
public:
    ObstacleDetector(); // デフォルトコンストラクタ
    void process();
private:
    // ----- 関数（引数あり) ------
    // コールバック関数
    void laser_callback(const sensor_msgs::LaserScan::ConstPtr&);

    // その他の関数

    // ----- 関数（引数なし）-----
    // ----- 変数 -----
    // msgの受け取り判断用
    // ----- その他のオブジェクト -----

}

#endif
