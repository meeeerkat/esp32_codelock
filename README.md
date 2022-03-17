
## A codelock component for esp32
This component implements the behaviour of a physical codelock connected to the esp32.
The buttons are identified by an upper case letter and can be configured using the menuconfig.
Typing the right code triggers the on\_success\_callback, typing the wrong one triggers on\_failure\_callback.
The valid code is set at runtime when initialising the component and can then be modified.


### TODO
- Try to make the keys configuration as user friendly as it is without using so many macros
