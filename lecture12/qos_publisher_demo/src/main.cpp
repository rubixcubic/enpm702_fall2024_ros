#include "qos_publisher_demo_node.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<QoSPublisherDemoNode>());
    rclcpp::shutdown();
}