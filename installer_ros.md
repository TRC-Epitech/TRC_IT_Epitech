# POUR FEDORA

sudo dnf install -y podman curl
curl -s https://raw.githubusercontent.com/89luca89/distrobox/main/install | sudo bash
distrobox-create --name ubuntu-ros --root --image ubuntu:22.04 
distrobox-enter ubuntu22 --root
sudo apt update && sudo apt upgrade -y
sudo apt install -y curl gnupg lsb-release
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
sudo apt update
sudo apt install -y ros-humble-desktop
sudo apt install ros-dev-tools
echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
sudo apt install -y python3-rosdep
sudo rosdep init
rosdep update

# TEST DE L'INSTALLATION
ros2 run demo_nodes_cpp talker
ros2 run demo_nodes_py listener
    