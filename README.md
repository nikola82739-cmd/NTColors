#[🔅] NTColors

NTColors is a simple, header-only C++ library that provides a convenient namespace for adding color and style to terminal output using ANSI escape codes.

##[❓] Usage

To use NTColors in your project, simply include the `colors.h` header file.

```cpp
#include <iostream>
#include "colors.h"

int main() {
    // Your code here
}
```

##[👨‍💻] Example

Here is a basic example of how to use the color and style constants:

```cpp
#include <iostream>
#include "colors.h"

int main() {
    std::cout << ntcolors::fg_green << "This is a success message!" << ntcolors::reset << std::endl;
    std::cout << ntcolors::fg_yellow << ntcolors::underline << "This is a warning." << ntcolors::reset << std::endl;
    std::cout << ntcolors::bold << ntcolors::fg_red << "This is a bold error." << ntcolors::reset << std::endl;
    std::cout << ntcolors::bg_blue << ntcolors::fg_white << "This text has a blue background and white foreground." << ntcolors::reset << std::endl;
    std::cout << ntcolors::fg_bright_cyan << "This is bright cyan text." << ntcolors::reset << std::endl;
    
    return 0;
}
```

##[🌐] Available Constants

All constants are available within the `ntcolors` namespace.

###[🎳] Reset

-   `reset`: Resets all text attributes to the terminal's default.

###[🌠] Text Styles

-   `bold`
-   `dim`
-   `italic`
-   `underline`
-   `blink`
-   `inverse`

###[🌆] Foreground Colors

-   `fg_red`
-   `fg_green`
-   `fg_yellow`
-   `fg_blue`
-   `fg_white`
-   `fg_black`
-   `fg_purpur`
-   `fg_cyan`

###[🎇] Bright Foreground Colors

-   `fg_bright_black`
-   `fg_bright_red`
-   `fg_bright_green`
-   `fg_bright_yellow`
-   `fg_bright_blue`
-   `fg_bright_magenta`
-   `fg_bright_cyan`
-   `fg_bright_white`

###[🎆] Background Colors

-   `bg_red`
-   `bg_green`
-   `bg_yellow`
-   `bg_blue`
-   `bg_white`
-   `bg_black`
-   `bg_purpur`
-   `bg_cyan`

###[🌅] Bright Background Colors

-   `bg_bright_black`
-   `bg_bright_red`
-   `bg_bright_green`
-   `bg_bright_yellow`
-   `bg_bright_blue`
-   `bg_bright_magenta`
-   `bg_bright_cyan`
-   `bg_bright_white`
