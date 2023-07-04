# messenger_skullking_4
A simple messanger client written in C/ C++ as of the final project of advanced prgramming course at [IUT](https://english.iut.ac.ir/).

You can find a list of all the server requests possible in [All request and reply](https://github.com/gravelord-nito/messenger_skullking_4/blob/main/Messenger%20All%20request%20and%20reply%20format.pdf) pdf file.

## Design
The UI and request interfaces are completely seperated and also from the core GUI renderer. You can find both the UI and request source codes in the single header file [tools.h](https://github.com/gravelord-nito/messenger_skullking_4/blob/IMGUI/MY/APP/MAIN/tools.h)/ [tools.cpp](https://github.com/gravelord-nito/messenger_skullking_4/blob/IMGUI/MY/APP/MAIN/tools.cpp), minimally coded and highly reusable, separated in different namespaces, request methods being completely indepandant.

## Usage
Main app could be run by the solution file at [MY/APP/](https://github.com/gravelord-nito/messenger_skullking_4/tree/IMGUI/MY/APP).

##  Credits
* [Dear IMGUI](https://github.com/ocornut/imgui)
* [Single-header C++ HTTP request class ](https://github.com/elnormous/HTTPRequest)
* [JSON for modern C++](https://github.com/nlohmann/json#thanks)
