# Example package ROS2 & ePro talking to each other

1. [Packages](#Packages)
2. [Building](#Build)
3. [Running](Running)


## Packages

### idl_msgs

This package shows generating ROS messages directly from an .idl file. The format for .idl file is as follow:

```sh
module <package_name>{  # matches package name
    module idl{  # must be 'idl' for .idl file
        # Message Contents
    };
};
```

e.g.. The example StringIdl.idl in this package are as follow:

```sh
module idl_msgs{  # matches package name
    module idl{  # message type, must be 'idl' for .idl file
        struct StringIdl{  # Message Contents
            string msg_string;
        };
    };
};
```

### idl_demo

This package is the example ROS2 publisher and subscriber using the generated Message from idl_msgs. The Message is included by using:

```sh
include "idl_msgs/idl/string_idl.hpp"
```

The topic name is set to be "chatter".

### fastrtps_pubsub

This package is the example fastrtps publisher and subscriber. The code in this packagge is generated using eProsima's fastrtps gen by running

```sh
fastrtpsgen -typeros2 -example CMake ../idl_msgs/idl/StringIdl.idl
```

The topic name in generated StringIdlPublisher.cxx and StringIdlSubscriber.cxx are set to be "rt/chatter" to be able to communicate with ROS2 publisher and subscriber. The documentation for the topic name is found in [ROS2 documentation](https://design.ros2.org/articles/topic_and_service_names.html)

## Build

Build the package by running

```sh
git clone https://github.com/JiaqiaoZhang/example_idl_ws.git
cd example_idl_ws
colcon build
```

## Running

Run the ROS2 publisher (open new terminal)

```sh
. install/setup.bash
ros2 run idl_demo idl_pub
```

Run the ROS2 subcriber (open new terminal)

```sh
. install/setup.bash
ros2 run idl_demo idl_sub
```

Run the Fast RTPS publisher (open new terminal)

```sh
./install/fastrtps_pubsub/lib/fastrtps_pubsub/StringIdl publisher
```

Run the Fast RTPS subscriber (open new terminal)

```sh
./install/fastrtps_pubsub/lib/fastrtps_pubsub/StringIdl subscriber
```
