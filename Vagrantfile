# -*- mode: ruby -*-
# vi: set ft=ruby :

# provision script
#-----------------------------------------------------------------------
$bootstrap = <<BOOTSTRAP
export DEBIAN_FRONTEND=noninteractive
apt-get update && apt-get upgrade

# label as reference environment
echo "export ECE3574_REFERENCE_ENV=Y" >> /etc/environment

# install base development tools
apt-get -y install build-essential
apt-get -y install cmake valgrind lcov graphviz doxygen
apt-get -y install python3-pip
pip3 install gcovr
pip3 install pexpect

# install a lightweight graphical environment
apt-get -y install virtualbox-guest-dkms
apt-get -y install virtualbox-guest-utils
apt-get -y install virtualbox-guest-x11
apt-get -y install xorg sddm openbox
echo "[Autologin]" >> /etc/sddm.conf
echo "User=vagrant" >> /etc/sddm.conf
echo "Session=openbox.desktop" >> /etc/sddm.conf

# install a simple browser (for viewing coverage reports)
apt-get -y install hv3

# install Qt dev libs
apt-get -y install qt5-default
BOOTSTRAP
#-----------------------------------------------------------------------


# Configuration
Vagrant.configure("2") do |config|
  config.vm.box = "bento/ubuntu-18.04"

  # (default timeout is 300 s)
  config.vm.boot_timeout = 600

  # get rid of annoying console.log file and start the GUI
  config.vm.provider "virtualbox" do |vb|
    vb.customize [ "modifyvm", :id, "--uartmode1", "disconnected" ]
    vb.gui = true
  end
  
  # set up the VM
  config.vm.provision "shell", inline: $bootstrap
end
