# Example package ROS2 & ePro talking to each other

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

```sh
#include "idl_msgs/idl/string_idl.hpp"